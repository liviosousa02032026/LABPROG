import os
import subprocess
import ollama

MODELO = 'qwen2.5-coder:7b'

def executar_comando(comando):
    """Executa um comando no terminal e retorna a saída."""
    resultado = subprocess.run(comando, shell=True, capture_output=True, text=True)
    return resultado.stdout.strip(), resultado.stderr.strip(), resultado.returncode

def main():
    print("🤖 Agente Autônomo de Git iniciado...\n")

    # 1. Verificar quais arquivos foram alterados/criados
    stdout, stderr, code = executar_comando("git status --porcelain")
    if not stdout:
        print("ℹ️ Nenhum arquivo novo ou alterado foi encontrado nesta pasta.")
        return

    print("📄 Arquivos detectados para envio:")
    print(stdout)
    print("\n--------------------------------------------------")

    # 2. Executar 'git add .'
    print("📦 Adicionando arquivos com 'git add .'...")
    executar_comando("git add .")

    # 3. Usar Ollama para criar uma mensagem de commit inteligente
    prompt = f"""
    Você é um agente Git autônomo. Analise a lista de arquivos alterados/criados abaixo e gere UMA ÚNICA frase curta e direta de mensagem de commit em português descrevendo a alteração (por exemplo: "Adiciona exercícios resolvidos da Lista 2 em C").

    Arquivos:
    {stdout}

    Retorne APENAS o texto da mensagem de commit, sem aspas, sem explicações extras antes ou depois.
    """

    print(f"🧠 Agente {MODELO} gerando mensagem de commit no Ollama...")
    resposta = ollama.chat(
        model=MODELO,
        messages=[{'role': 'user', 'content': prompt}]
    )
    
    mensagem_commit = resposta['message']['content'].strip().replace('"', '').split('\n')[0]
    print(f"📝 Mensagem de commit gerada pela IA: \"{mensagem_commit}\"")

    # 4. Fazer o commit
    print("💾 Gravando o commit localmente...")
    stdout_c, stderr_c, code_c = executar_comando(f'git commit -m "{mensagem_commit}"')

    # 5. Fazer o push para o GitHub
    print("🚀 Enviando para o GitHub ('git push')...\n")
    stdout_p, stderr_p, code_p = executar_comando("git push origin main")

    if code_p == 0 or "main -> main" in stderr_p or "Everything up-to-date" in stderr_p:
        print("🎉 SUCESSO! O Agente Autônomo enviou todos os arquivos da Lista 2 para o GitHub!")
    else:
        print(f"⚠️ Observação no push:\n{stderr_p}")

if __name__ == '__main__':
    main()