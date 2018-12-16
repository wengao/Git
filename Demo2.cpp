

#include<stdio.h>


//	冒泡排序
void bubble_sort(int array[],int length){

	int i,j;
	for(i=0;i<length;i++)  
	{
		//n个数要进行n-1趟比较
		for(j=0;j<=length-i;j++)
		{								//每趟比较n-i次
			if(array[j]>array[j+1])          //依次比较两个相邻的数，将小数放在前面，大数放在后面
			{
				int t=array[j];
				array[j]=array[j+1];
				array[j+1]=t;
			}
		}
	}
 
	for(i=0;i<length;++i)               //输出比较之后的数组
		printf(" %d",array[i]);


	
}


void selection_sort(int array[],int length){
	int i;
	int j;
	int min;
	int temp;
 
	for(i=0; i<length; i++){
		min = i;	//默认将当前下标的元素定义为最小值
		for(j=i+1; j<length; j++){
			if(array[min] > array[j]){	//这是一个寻找最小值的过程
				min = j;
			}
		}
		if(min != i){		//如果最小值发生了变化,不再是第i个元素,那么交换他们的位置
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
		}
	}

	for(i=0;i<length;i++){
		printf("%d ",array[i]);
	}
	
}


//矩阵转置
//row 多少行
//col 多少列

//如果将二维数组作为参数传递给函数，那么在函数的参数声明中必须指明数组的列数，数组的行数没有太大关系，
//可以指定也可以不指定。因为函数调用时传递的是一个指针，它指向由行向量够成的一维数组。
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
	printf("请输入10个整数\n");
	for(i=1;i<=10;i++){
		scanf("%d",&a[i-1]);
	}
	printf("\n");
	
	printf("你输入的10个数字为：");
	for(i=0;i<10;i++){
		printf("%d\t",a[i]);
	}
	printf("\n\n");

	printf("使用冒泡排序的结果是：");
	bubble_sort(a,10);
	printf("\n\n\n");

	printf("使用简单选择排序的结果是：");
	selection_sort(a,10);
	printf("\n\n\n");


	printf("输入矩阵元素，按行输入，一行四个元素，总共4行\n");
	for(i=0;i<4;i++){
		printf("第%d行元素是：\t",i+1);
		for(j=0;j<4;j++){
			
			scanf("%d",&matrix[i][j]);
		}
		printf("\n");
	}

	permutation_matrix(matrix);



	return 0;
}