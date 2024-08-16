# 1. Início do Programa (main.cpp)
-O programa começa no arquivo main.cpp, onde os argumentos da linha de comando são verificados.

-O formato esperado é: ./dna_profiler -d <database_file> -s <dna_sequence_file>.

-Se os argumentos forem errados, o programa da uma mensagem de uso e termina.

-Caso contrário, uma instância de Profiler é criada, e a funçao (run) é chamada e passa os caminhos dos arquivos de banco de dados e sequência de DNA.



# 2. Carregamento do Banco de Dados (Database::loadDatabase)
-O método loadDatabase da classe Database é chamado para carregar o banco de dados do arquivo CSV.
-A primeira linha do arquivo contém os nomes dos STRs que são armazenados em l_srts.
-As proximas linhas contêm os nomes das pessoas seguidos das contagens de cada STR, que são armazenados em l_names e l_profiles.
-Cada perfil de DNA é armazenado como um objeto DNAProfile em l_profiles.



# 3. Análise da Sequência de DNA (Profiler::run)
-O arquivo contendo a sequência de DNA é lido, e a sequência é armazenada.
-Um novo objeto DNAProfile é criado para essa sequência.
-Para cada STR na lista l_srts, o código calcula a contagem máxima de repetições consecutivas desse STR na sequência de DNA.
-Essas contagens são adicionadas ao objeto DNAProfile correspondente à sequência analisada.



# 4. Comparação com o Banco de Dados (Database::findMatch)
-O perfil de DNA gerado a partir da sequência é comparado com cada perfil no banco de dados.
-Para cada perfil no banco de dados, as contagens de STRs são comparadas com as contagens do perfil analisado.
-Se os STRs baterem o nome associado ao perfil é retornado.



# 5. Resultado Final
-Se uma correspondência é encontrada, o programa imprime o nome da pessoa correspondente e sua sequência de DNA.
-Caso contrário, imprime "no match found".
-Além disso, os STRs e a sequencia inteira são mostrados.
