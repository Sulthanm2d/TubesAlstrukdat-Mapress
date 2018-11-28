#include "page.h"

void FrontPage(){
// Tampilan awal pada game
	char menu;
	char name[25];
	char c;
	
	menu = 0;
	name[1] = ' ';
	
	while (menu != '4'){
		printf("\n");
		system("cls");
                                                                                                
		printf("  __     _   _                  _____\n");                     
		printf(" /_ |   | \\ | |                / ____|\n");                   
		printf("  | |   |  \\| | _____      __ | |  __  __ _ _ __ ___   ___ \n");
		printf("  | |   | . ` |/ _ \\ \\ /\\ / / | | |_ |/ _` | '_ ` _ \\ / _ \\\n");
		printf("  | |_  | |\\  |  __/\\ V  V /  | |__| | (_| | | | | | |  __/\n");
		printf("  |_(_) |_| \\_|\\___| \\_/\\_/    \\_____|\\__,_|_| |_| |_|\\___|\n");
		
		printf("  ___       _____ _             _      _____     \n");                 
		printf(" |__ \\     / ____| |           | |    / ____|     \n");                
		printf("    ) |   | (___ | |_ __ _ _ __| |_  | |  __  __ _ _ __ ___   ___ \n");
		printf("   / /     \\___ \\| __/ _` | '__| __| | | |_ |/ _` | '_ ` _ \\ / _ \\\n");
		printf("  / /_ _   ____) | || (_| | |  | |_  | |__| | (_| | | | | | |  __/\n");
		printf(" |____(_) |_____/ \\__\\__,_|_|   \\__|  \\_____|\\__,_|_| |_| |_|\\___|\n");
		printf("  ____     _                     _    _____  \n");                    
		
		printf(" |___ \\   | |                   | |  / ____|     \n");                
		printf("   __) |  | |     ___   __ _  __| | | |  __  __ _ _ __ ___   ___ \n");
		printf("  |__ <   | |    / _ \\ / _` |/ _` | | | |_ |/ _` | '_ ` _ \\ / _ \\\n");
		printf("  ___) |  | |___| (_) | (_| | (_| | | |__| | (_| | | | | | |  __/\n");
		printf(" |____(_) |______\\___/ \\__,_|\\__,_|  \\_____|\\__,_|_| |_| |_|\\___|\n");
		
		printf("  _  _     ______      _ _   \n");
		printf(" | || |   |  ____|    (_) |  \n");
		printf(" | || |_  | |__  __  ___| |_ \n");
		printf(" |__   _| |  __| \\ \\/ / | __|\n");
		printf("    | |_  | |____ >  <| | |_ \n");
		printf("    |_(_) |______/_/\\_\\_|\\__|\n");
		printf("\n\n");

		if (name[1] != ' '){
			printf("Hi %s,\n", name);
			printf("You can choose number 2 to start the game or choose number 1 to rename your character\n");
			printf("Choose the number: ");
			scanf("%c", &menu);
		}else{
			printf("Choose the number: ");
			scanf("%c", &menu);
		}
		
		
		if (menu == '1'){
			printf("Your name: ");
			scanf("%s", name);
		}else if (menu == '2'){
			if (name[1] != ' '){
				StartGame();
			}else{
			printf("Choose number 1 first to create your character!\n");
			printf("\n\n");
			printf("---Press enter to continue---\n");
			scanf("%c",&c);
			scanf("%c",&c);
			} 
		}else if (menu == '3'){ 
			LoadGame();
		}
	}
	Quit();
	
}

void StartGame(){
	char Map[100] = "MapKitchen.txt";
	
	BacaMap(Map);
}

void LoadGame(){
	char Map[100];
	
	printf("Enter file name that you want to load: ");
	scanf("%s", Map);
	BacaMap(Map);
	
}

void BacaMap(char *Map){
//Membaca dan menampilkan Map
}

void Quit(){
// Keluar dari game
	char Choose;

	system("cls");
	printf("   Are you sure? (Y/N)  : ");
	scanf("%c", &Choose);
	
	if (Choose == 'Y'){
		printf("  _______ _                 _     __     __           _ \n");
		printf(" |__   __| |               | |    \\ \\   / /          | |\n");
		printf("    | |  | |__   __ _ _ __ | | __  \\ \\_/ /__  _   _  | |\n");
		printf("    | |  | '_ \\ / _` | '_ \\| |/ /   \\   / _ \\| | | | | |\n");
		printf("    | |  | | | | (_| | | | |   <     | | (_) | |_| | |_|\n");
		printf("    |_|  |_| |_|\\__,_|_| |_|_|\\_\\    |_|\\___/ \\__,_| (_)\n");
		printf("\n\n");
	} else if (Choose == 'N'){
		FrontPage();
	} else{
		Quit();
	}
	
}
