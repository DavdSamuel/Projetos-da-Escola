println("Qual o comprimento do retângulo: ") # Pergunta qual é o comprimento do retângulo
comprimento = parse(Float64, readline())  # Lendo e convertendo para número
println("Ok, o comprimento é $comprimento")
println("Qual a largura do retângulo: ") # Pergunta qual é a largura do retângulo
largura = parse(Float64, readline())  # Lendo e convertendo para número
println("Ok, a largura é $largura")
retângulo = comprimento*largura  # Multiplicando o comprimento por 2
println("O cálculo do retângulo é $retângulo")  # Imprime o resultado