# Nota bem importante
O executável e outros arquivos gerados na pasta `build` **são para o sistema operacional Linux**, então **NUNCA, em HIPÓTESE ALGUMA teste esses arquivos no Windows** (e eu nem recomendo testar esses arquivos em algumas distribuições Linux).

---

## Requisitos mínimos pra rodar
- **GCC (Unix):** É uma coleção de compiladores para várias linguagens como C e C++, esse é o compilador que eu uso para compilar meus programas C/C++.  
Para instalá-lo você pode rodar por exemplo no Ubuntu, Debian, ou no Mint (minha distribuição):
```bash
sudo apt-get install build-essential
```  
**Nota: Infelizmente o GCC só está disponível para sistemas Unix e derivados do Unix, como Linux e macOS.**  

- **MinGW (Windows):** É uma versão do GCC para o sistema operacional Windows. Para instalá-lo você pode clicar [aqui](https://sourceforge.net/projects/mingw/).

- **CMake:** Para compilar o FormulaCalculator, você pode baixá-lo [aqui](https://cmake.org/) e configurá-lo.
### Recomendado
- **Git (Opcional):** Se você quiser ver todos esses projetos e fazer coisas com eles, [claro primeiro leia a licença do repositório (Apache 2.0)](https://github.com/DavdTheItGuy/Projetos-da-Escola/blob/main/LICENSE), depois agora você pode [instalar o git](https://git-scm.com/downloads) e [clonar o repositório](https://git-scm.com/docs/git-clone). Para clonar o repositório abra o BASH, CMD, PowerShell ou o terminal da sua escolha e digite:
```bash
git clone "https://github.com/DavdTheItGuy/Projetos-da-Escola.git"
```
Aparecerá uma pasta onde você poderá editar os arquivos do repositório.