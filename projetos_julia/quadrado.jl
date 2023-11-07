println("Qual o comprimento/largura do quadrado: ") # Pergunta qual é o comprimento/largura do quadrado
comprimento = parse(Float64, readline())  # Lendo e convertendo para número
println("Ok, o comprimento/largura é $comprimento")
quadrado = comprimento^2  # Multiplicando o comprimento por 2
println("O cálculo do quadrado é $quadrado")  # Imprime o resultado