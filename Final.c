void ganhou(){
    system("cls");
    printf("\n\n\n\n");
    Sleep(200);
    system("COLOR 07");
    printf("##     ##  ######  ##   ##   ##        ## ## #####   ##\n");
    Sleep(200);
    printf("##     ## ##    ## ##   ##   ##        ## ## ## ##   ##\n");
    printf(" #######  ##    ## ##   ##   ##        ## ## ##  ##  ##\n");
    Sleep(200);
    system("COLOR 04");
    printf("   ##     ##    ## ##   ##   ##  ###   ## ## ##   ## ##\n");
    printf("   ##     ##    ## ##   ##   ## ##  #  ## ## ##    ####\n");
    Sleep(200);
    system("COLOR 07");
    printf("   ##      ######   #####     ###    ###  ## ##     ###\n");
    int i;
    for(i = 0; i <10; i++){
        Sleep(200);
        system("COLOR 04");
        Sleep(200);
        system("COLOR 07");
    }


}

void perdeu(){
    system("cls");
    printf("\n\n\n\n");
    Sleep(200);
    system("COLOR 04");
    printf("#########  ######  ###     ### #######   ######## ##    ## ####### ########\n");
    Sleep(200);
    system("COLOR 07");
    printf("##     ## ###  ### ## ## ## ## ##        ##    ## ##    ## ##      ##    ##\n");
    printf("##        ##    ## ##  ###  ## ##        ##    ## ##    ## ##      ##    ##\n");
    Sleep(200);
    system("COLOR 04");
    printf("##   #### ######## ##   #   ## #######   ##    ## ##    ## ####### ####### \n");
    printf("##   #### ######## ##   #   ## ##        ##    ## ##    ## ##      ##  ##  \n");
    Sleep(200);
    system("COLOR 07");
    printf("##     ## ##    ## ##       ## ##        ##    ## ##    ## ##      ##   ## \n");
    printf("######### ##    ## ##       ## #######   ########   ####   ####### ##    ##\n");
    int i;
    for(i = 0; i <10; i++){
        Sleep(200);
        system("COLOR 04");
        Sleep(200);
        system("COLOR 07");
    }
}
