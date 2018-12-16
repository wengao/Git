

#include<stdio.h>


//	ð������
void bubble_sort(int array[],int length){

	int i,j;
	for(i=0;i<length;i++)  
	{
		//n����Ҫ����n-1�˱Ƚ�
		for(j=0;j<=length-i;j++)
		{								//ÿ�˱Ƚ�n-i��
			if(array[j]>array[j+1])          //���αȽ��������ڵ�������С������ǰ�棬�������ں���
			{
				int t=array[j];
				array[j]=array[j+1];
				array[j+1]=t;
			}
		}
	}
 
	for(i=0;i<length;++i)               //����Ƚ�֮�������
		printf(" %d",array[i]);


	
}


void selection_sort(int array[],int length){
	int i;
	int j;
	int min;
	int temp;
 
	for(i=0; i<length; i++){
		min = i;	//Ĭ�Ͻ���ǰ�±��Ԫ�ض���Ϊ��Сֵ
		for(j=i+1; j<length; j++){
			if(array[min] > array[j]){	//����һ��Ѱ����Сֵ�Ĺ���
				min = j;
			}
		}
		if(min != i){		//�����Сֵ�����˱仯,�����ǵ�i��Ԫ��,��ô�������ǵ�λ��
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
		}
	}

	for(i=0;i<length;i++){
		printf("%d ",array[i]);
	}
	
}


//����ת��
//row ������
//col ������

//�������ά������Ϊ�������ݸ���������ô�ں����Ĳ��������б���ָ����������������������û��̫���ϵ��
//����ָ��Ҳ���Բ�ָ������Ϊ��������ʱ���ݵ���һ��ָ�룬��ָ�������������ɵ�һά���顣
void permutation_matrix(int matrix[4][4]){
	int i;
	int j;
	int t;
	for(i=0;i<4;i++){
		for(j=i;j<4;j++){
			t=matrix[i][j];
			matrix[i][j]=matrix[j][i];
			matrix[j][i]=t;
		}

	}

	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d ",matrix[i][j]);	
		}
		printf("\n");
	}	
}



int main(){
	int i;
	int j;
	int a[10];
	int matrix[4][4];
	printf("������10������\n");
	for(i=1;i<=10;i++){
		scanf("%d",&a[i-1]);
	}
	printf("\n");
	
	printf("�������10������Ϊ��");
	for(i=0;i<10;i++){
		printf("%d\t",a[i]);
	}
	printf("\n\n");

	printf("ʹ��ð������Ľ���ǣ�");
	bubble_sort(a,10);
	printf("\n\n\n");

	printf("ʹ�ü�ѡ������Ľ���ǣ�");
	selection_sort(a,10);
	printf("\n\n\n");


	printf("�������Ԫ�أ��������룬һ���ĸ�Ԫ�أ��ܹ�4��\n");
	for(i=0;i<4;i++){
		printf("��%d��Ԫ���ǣ�\t",i+1);
		for(j=0;j<4;j++){
			
			scanf("%d",&matrix[i][j]);
		}
		printf("\n");
	}

	permutation_matrix(matrix);



	return 0;
}