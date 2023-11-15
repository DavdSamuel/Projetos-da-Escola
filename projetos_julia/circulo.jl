println("Qual o diâmetro do círculo: ") # Pergunta qual é o diâmetro do círculo
diâmetro = parse(Float64, readline())  # Lendo e convertendo para número
raio = diâmetro / 2  # Dividindo o diâmetro por 2
println("Ok, o raio é $raio")
área = π * raio^2  # Área do círculo
circunferência = raio * 2π  # Circunferência
println("O cálculo da circunferência é $circunferência e a área é $área")  # imprime o resultado