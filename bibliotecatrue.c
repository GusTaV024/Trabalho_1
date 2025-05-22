#include <stdio.h>  
#include <time.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

int main(void){

        // HORARIO E DATA ATUAL
        
        SetConsoleOutputCP(CP_UTF8);              
        system("chcp 65001");
        setlocale(LC_TIME, "Portuguese_Brazil"); 

        time_t horario;     // PROFESSOR, O HORARIO FUNCIONA EM TEMPO REAL.
        struct tm *atual;   // TODOS ESTÃO FUNCIONANDO PERFEITAMENTE!
                            // MUDE O HORARIO DO SEU COMPUTADOR PARA TESTAR.
    time(&horario);
    atual = localtime(&horario);
    char dia[15];
    strftime(dia, 15, "%A", atual);
    size_t tamanho_do_dia = strlen(dia);
    int horas = atual->tm_hour;
    
    
        // IMPUTS
   
  
         char matricula[99], curso[99];
         int idade, categoria, debito;

        printf("===BIBLIOTECA===\n\n");
        printf("%s, %d:%d\n\n", dia, atual->tm_hour, atual->tm_min);
        printf("Sua matricula: ");
    scanf("%s", matricula);
        printf("\nSua idade: ");
    scanf("%d", &idade);
        printf("\nCurso matriculado (Não use espaço) : ");        // ESPAÇO NÃO FUNCIONA NESTA FUNÇÃO!
    scanf("%s", curso);
        printf("\nCategoria de usuario:\n");
        printf("1- Aluno de graduação\n2- Aluno de pós-graduação\n");
        printf("3- Professor\n4- Visitante\n>: ");
    scanf("%d", &categoria);
        printf("Esta em debito com a biblioteca?\n1- SIM\n2- NÃO\n>: ");
    scanf("%d", &debito);

    

        // EXECUÇÃO
    
    printf("\n======\nMatricula: %s.\nIdade: %d anos.\nCurso: %s.", matricula, idade, curso);
    

    if(categoria > 4 || categoria < 1){
        printf("\n\nACESSO NEGADO. Valor de categoria invalido, re-abra o programa e tente novamente.");
    }

    switch(categoria){
        case 1 :        // CATEGORIA 1 - GRADUADO
        
        printf("\nCategoria: Aluno de Graduação.");
        if(tamanho_do_dia != 6 && tamanho_do_dia != 7){
                        if(horas >= 8 && horas <= 22){
                            if(debito == 2){
                                printf("\n\nBem vindo a biblioteca!\n\nLivros disponiveis:");
                                printf("\n\n- C - COMPLETO E TOTAL (the goat)\n- Como treinar seu dragão: volume 1\n- Tutorial de Popstar - Manoel Gomes\n———");
                                    }else{
                                        printf("\n\nACESSO NEGADO. Você esta com débito pendente.");
                                    }

                        }else{
                            printf("\n\nACESSO NEGADO. Você só pode acessar durante 8 as 22h.");
                        }
            }   
            else{
                printf("\n\nACESSO NEGADO. Entrada invalida aos finais de semana.");
            }

            break;

        case 2 :        // CATEGORIA 2 - POS-GRADUADO
        
        printf("\nCategoria: Aluno de Pós-Graduação.");
        if(tamanho_do_dia != 7){
                        if(horas >= 8 && horas <= 22){
                            if(debito == 2){
                                printf("\n\nBem vindo a biblioteca!\n\nLivros disponiveis:");
                                printf("\n\n- C - COMPLETO E TOTAL (the goat)\n- Como treinar seu dragão: volume 1\n- Tutorial de Popstar - Manoel Gomes\n———");
                                    }else{
                                        printf("\n\nACESSO NEGADO. Você esta com débito pendente.");
                                    }

                        }else{
                            printf("\n\nACESSO NEGADO. Você só pode acessar durante 8 as 22h.");
                        }
            }   
            else{
                printf("\n\nACESSO NEGADO. Entrada invalida no domingo.");
            }

            break;

        case 3 :        // CATEGORIA 3 - PROFESSOR

            printf("\nCategoria: Professor.");
            printf("\n\nBem vindo a biblioteca, professor!\n\nLivros disponiveis:");
            printf("\n\n- C - COMPLETO E TOTAL (the goat)\n- Como treinar seu dragão: volume 1\n- Tutorial de Popstar - Manoel Gomes\n———");
            
            break;

        case 4 :        // CATEGORIA 4 - VISITANTE
        
        printf("\nCategoria: Visitante.");
        if(tamanho_do_dia != 6 && tamanho_do_dia != 7){
                        if(horas >= 9 && horas <= 17){
                            if(debito == 2){
                                printf("\n\nBem vindo a biblioteca!\n\nLivros disponiveis:");
                                printf("\n\n- C - COMPLETO E TOTAL (the goat)\n- Como treinar seu dragão: volume 1\n- Tutorial de Popstar - Manoel Gomes\n———");
                                    }else{
                                        printf("\n\nACESSO NEGADO. Você esta com débito pendente.");
                                    }

                        }else{
                            printf("\n\nACESSO NEGADO. Você só pode acessar durante 9 as 17h.");
                        }
            }   
            else{
                printf("\n\nACESSO NEGADO. Entrada invalida aos finais de semana.");
            }
            break;
            }
getchar();
getchar();
return 0;
        }

   

    
