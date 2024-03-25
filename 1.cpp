int main () {
    int n1, n2, *p1 = &n1, *p2 = &n2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);
    
    printf("Numero com o maior endereco: ");
    
    if (p1 > p2) {
        printf("%d\n", *p1);
    } else {
        printf("%d\n", *p2);
    }
    
    return 0;
}
