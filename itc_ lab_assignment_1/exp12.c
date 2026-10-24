#include <stdio.h>

int main(){
    int exp_no,roll,no_of_observations;
    float inp_amp,out_amp,inp_freq,volt;
    char section,instrument_code,observation_code;

    printf("========================================\n");
    printf("     ECE LABORATORY MEASUREMENT FORM     \n");
    printf("========================================\n");
    printf("Enter experiment number: ");
    scanf("%d",&exp_no);
    printf("Enter student roll number: ");
    scanf("%d",&roll);
    printf("Enter supply voltage: ");
    scanf("%f",&volt);
    printf("Enter input signal frequency: ");
    scanf("%f",&inp_freq);
    printf("Enter input signal amplitude: ");
    scanf("%f",&inp_amp);
    printf("Enter output signal amplitude: ");
    scanf("%f",&out_amp);
    printf("Enter number of observations: ");
    scanf("%d",&no_of_observations);
    printf("Enter section: ");
    scanf(" %c",&section);
    printf("Enter instrument type code: ");
    scanf(" %c",&instrument_code);
    printf("Enter observation status code: ");
    scanf(" %c",&observation_code);

    printf("\n=====================================\n");

    printf("        EXPERIMENT RECORD       \n");
    printf("======================================\n");
    printf("Experiment Number       :  %c\n",exp_no);
    printf("Student Roll Number     :  %d\n",roll);
    printf("Supply Voltage          :  %.2f V\n",volt);
    printf("Input Frequency         :  %.2f Hz\n",inp_freq);
    printf("Input Amplitude         :  %.2f V\n",inp_amp);
         
    printf("Output Amplitude        :  %.2f V\n",out_amp);
    printf("Number of Observations  :  %d \n",no_of_observations);
    printf("Section                 :  %c\n",section);
    printf("Instrument Type         :  %c\n",instrument_code);
    printf("Observation Status      :  %c\n",observation_code );

    printf("=====================================\n");




    
    
    



    
    return 0;
}