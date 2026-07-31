int main()

{
	float m1,m2,m3,m4,m5,total;
	printf("\nenter marks 1 out of 100: ");
	scanf("%f" ,&m1);
	printf("\nenter marks 2 out of 100: ");
	scanf("%f" ,&m2);
	printf("\nenter marks 3 out of 100: ");
	scanf("%f" ,&m3);
	printf("\nenter marks 4 out of 100: ");
	scanf("%f" ,&m4);
	printf("\nenter marks 5 out of 100: ");
	scanf("%f" ,&m5);
	total=m1,m2,m3,m4,m5;
	printf("\ntotal marks: %f" ,total);
	printf("\npercentage: %f",(total/500)*100);
	return 0;
}