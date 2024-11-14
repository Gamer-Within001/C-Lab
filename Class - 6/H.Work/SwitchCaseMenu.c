#include<stdio.h>
int main(){
    int menu, a , b , Veg, Starters, Salads, Soups, Breads;
    int RiceAndBiryani, MainCourse, SpecialMains, Paneerrrr;
    int Accompaniments, Desserts, Beverages, MocktailsAndCocktails;
    int non_veg, NV_Starters, NV_Salads, NV_Soups, NV_RiceAndBiryani;
    int NV_MainCourse, NV_SpecialMains, ContinueOrdering; 
    printf("Welcome To The Indian Hawaii Restaruant\n");
    do{
    printf("What Would You Like ?\n");
    printf("Remember The Prise Is A Mystery");
    printf("Choose From The Options Given Below : \n");
    printf("Enter 1 To Open Menu Of This Amazing Restaurant\n");
    printf("Enter 2 To Exit\n");
    printf("Enter:");
    scanf("%d", & a);
    if (a == 2)
    {
        printf("\nVisit Again");
        break;
    }
    else{
        printf("\nPls Select Your Preference Between The Two :\n 1 - Veg \n 2 - Non - Veg\n");
        printf("Enter:");
    scanf ("%d", & b);
    if (b == 1)
    {
        printf("\n Veg Menu :-\n");
        printf("1: Starters\n");
        printf("2: Salads\n");
        printf("3: Soups\n");
        printf("4: Breads\n");
        printf("5: Rice And Biryani\n");
        printf("6: Main Course\n");
        printf("7: Special Mains\n");
        printf("8: Paneerrrr\n");
        printf("9: Accompaniments\n");
        printf("10: Desserts\n");
        printf("11: Beverages\n");
        printf("12: Mocktails And Cocktails\n");
        printf("Enter:");
        scanf("%d", & Veg);
        switch (Veg)
        {
        case 1 :
            printf("1: All Weather Phaldari Kebab\n");
            printf("2: Topolino's Khubani Paneer Tikka\n");
            printf("3: Klaxon Kebab\n");
            printf("4: The Lasalle Adventure\n");
            printf("5: Hara Pyaz and Corn Seekh Kebab\n");
            printf("6: Convertible Broccoli and Cauliflower\n");
            printf("7: Bhatti ka Khumb\n");
            printf("8: Fleetmaster Tandoori Platter\n");
            printf("Enter:");
            scanf("%d", & Starters);
            switch (Starters)
            {
            case 1:
                printf("You Have Ordered All Weather Phaldari Kebab\n");
                break;
            case 2:
                printf("You Have Ordered Topolino's Khubani Paneer Tikka\n");
                break;
            case 3:
                printf("You Have Ordered Klaxon Kebab\n");
                break;
            case 4:
                printf("You Have Ordered The Lasalle Adventure\n");
                break;
            case 5:
                printf("You Have Ordered Hara Pyaz and Corn Seekh Kebab\n");
                break;
            case 6:
                printf("You Have Ordered Convertible Broccoli and Cauliflower\n");
                break;
            case 7:
                printf("You Have Ordered Bhatti ka Khumb\n");
                break;
            case 8:
                printf("You Have Ordered Fleetmaster Tandoori Platter\n");
                break;
            default:
                    printf("Invalid Input, Try Ordering Again");
            }    
            break;
        case 2:
            printf("1: Coupe Salad\n");
            printf("2: Garden of Eden Salad\n");
            printf("3: Mysore Daimler Salad\n");
            printf("4: Marijuana Salad\n");
            printf("5: Paneer Salad\n");
            printf("Enter:");
            scanf("%d", & Salads);
            switch (Salads)
            {
            case 1:
                printf("You Have Ordered The Coupe Salad \n");
                break;
            case 2:
                printf("You Have Ordered Garden of Eden Salad\n");
                break;
            case 3:
                printf("You Have Ordered Mysore Daimler Salad\n");
                break;
            case 4:
                printf("You Have Ordered Marijuana Salad\n");
                break;
            case 5:
                printf("You Have Ordered Paneer Salad\n");
                break;
            default:
                    printf("Invalid Input, Try Ordering Again");
                    break;
            }        
            break;
        case 3:
            printf("1: Classic Crimson Shorba\n");
            printf("2: Veg Manchow Soup\n");
            printf("3: Mexican Tortilla Soup\n");
            printf("4: Veg Noodle Soup\n");
            printf("Enter:");
            scanf("%d", & Soups);
            switch (Soups)
            {
            case 1:
                printf("You Have Ordered Classic Crimson Shorba\n");
                break;
            case 2:
                printf("You Have Ordered Veg Manchow Soup\n");
                break;
            case 3:
                printf("You Have Ordered Mexican Tortilla Soup\n");
                break;
            case 4:
                printf("You Have Ordered Veg Noodle Soup\n");
                break;
            default:
                    printf("Invalid Input, Try Ordering Again");
                break;
            }
            break;
        case 4:
            printf("1: Plain Naan\n");
            printf("2: Butter Naan\n");
            printf("3: Garlic Naan\n");
            printf("4: Methi Lachha Parantha\n");
            printf("5: Chilli Cheese and Olive Parantha\n");
            printf("6: Bajre ka Sogra\n");
            printf("7: Amritsari Kulcha\n");
            printf("8: Tandoori Plain Roti\n");
            printf("9: Tandoori Butter Roti\n");
            printf("Enter:");
            scanf("%d", & Breads);
            switch (Breads)
            {
            case 1:
                printf("You Have Ordered Plain Naan\n");
                break;
            case 2:
                printf("You Have Ordered Butter Naan\n");
                break;
            case 3:
                printf("You Have Ordered Garlic Naan\n");
                break;
            case 4:
                printf("You Have Ordered Methi Lachha Parantha\n");
                break;
            case 5:
                printf("You Have Ordered Chilli Cheese and Olive Parantha\n");
                break;
            case 6:
                printf("You Have Ordered Bajre ka Sogra\n");
                break;
            case 7:
                printf("You Have Ordered Amritsari Kulcha\n");
                break;
            case 8:
                printf("You Have Ordered Tandoori Plain Roti\n");
                break;
            case 9:
                printf("You Have Ordered Tandoori Butter Roti\n");
                break;
            
            default:
                    printf("Invalid Input, Try Ordering Again");
                break;
            }
            break;
        case 5:
            printf("1: Plain Rice\n");
            printf("2: Jeera Rice\n");
            printf("3: Curd Rice\n");
            printf("4: Veg Pulao\n");
            printf("5: Veg Biryani\n");
            printf("6: Hyderabadi Biryani\n");
            printf("Enter:");
            scanf("%d", & RiceAndBiryani);
            switch (RiceAndBiryani)
            {
            case 1:
                printf("You Have Ordered Plain Rice\n");
                break;
            case 2:
                printf("You Have Ordered Jeera Rice\n");
                break;
            case 3:
                printf("You Have Ordered Curd Rice\n");
                break;
            case 4:
                printf("You Have Ordered Veg Pulao\n");
                break;
            case 5:
                printf("You Have Ordered Veg Biryani\n");
                break;
            case 6:
                printf("You Have Ordered Hyderabadi Biryani\n");
                break;
            
            default:
                    printf("Invalid Input, Try Ordering Again");
                break;
            }
            break;
        case 6:
            printf("1: The Governors Gobi\n");
            printf("2: Banarasi Kalonji Wale Baingan\n");
            printf("3: Bhavnagari Mirch Matar\n");
            printf("4: Kashi ke Dum Aloo\n");
            printf("5: Khumb Hara Pyaz\n");
            printf("6: Bhindi Kali Mirch with Baby Onions\n");
            printf("7: Khaas Dal Makhani\n");
            printf("Enter:");
            scanf("%d", & MainCourse);
            switch (MainCourse)
            {
            case 1:
                printf("You Have Ordered The Governors Gobi\n");
                break;
            case 2:
                printf("You Have Ordered Banarasi Kalonji Wale Baingan\n");
                break;
            case 3:
                printf("You Have Ordered Bhavnagari Mirch Matar\n");
                break;
            case 4:
                printf("You Have Ordered Kashi ke Dum Aloo\n");
                break;
            case 5:
                printf("You Have Ordered Khumb Hara Pyaz\n");
                break;
            case 6:
                printf("You Have Ordered Bhindi Kali Mirch with Baby Onions\n");
                break;
            case 7:
                printf("You Have Ordered Khaas Dal Makhani\n");
                break;
            
            default:
                    printf("Invalid Input, Try Ordering Again");
                break;
            }
            break;
        case 7:
            printf("1: Willys Bawan Bajre ki Khichdi\n");
            printf("2: Special Thali\n");
            printf("3: Special Meal 1\n");
            printf("4: Special Meal 2\n");
            printf("5: Special Dum Biryani\n");
            printf("Enter:");
            scanf("%d", & SpecialMains);
            switch (SpecialMains)
            {
            case 1:
                printf("You Have Ordered Willys Bawan Bajre ki Khichdi\n");
                break;
            case 2:
                printf("You Have Ordered Special Thali\n");
                break;
            case 3:
                printf("You Have Ordered Special Meal 1\n");
                break;
            case 4:
                printf("You Have Ordered Special Meal 2\n");
                break;
            case 5:
                printf("You Have Ordered Special Dum Biryani\n");
                break;
            
            default:
                    printf("Invalid Input, Try Ordering Again");
                break;
            }
            break;
        case 8:
            printf("1: Darbari Laal Paneer Bhurji\n");
            printf("2: Paneer Tikka Makhani\n");
            printf("3: Paneer Dhaniya Adaraki\n");
            printf("4: Paneer Kolhapuri\n");
            printf("5: Tawa Paneer\n");
            printf("6: Paneer Chilli Gravy\n");
            printf("7: Sleek Paneer Lababdar\n");
            printf("8: Bhatinada De Saag Paneer\n");
            printf("Enter:");
            scanf("%d", & Paneerrrr);
            switch (Paneerrrr)
            {
            case 1:
                printf("You Have Ordered Darbari Laal Paneer Bhurji\n");
                break;
            case 2:
                printf("You Have Ordered Paneer Tikka Makhani\n");
                break;
            case 3:
                printf("You Have OrderedPaneer Dhaniya Adaraki\n");
                break;
            case 4:
                printf("You Have Ordered Paneer Kolhapuri\n");
                break;
            case 5:
                printf("You Have Ordered Tawa Paneer\n");
                break;
            case 6:
                printf("You Have Ordered Paneer Chilli Gravy\n");
                break;
            case 7:
                printf("You Have Ordered Sleek Paneer Lababdar\n");
                break;
            case 8:
                printf("You Have Ordered Bhatinada De Saag Paneer\n");
                break;
            default:
                    printf("Invalid Input, Try Ordering Again");
                break;
            }
            break;
        case 9:
            printf("1: Boondi Rajwadi Raita\n");
            printf("2: Mixed Rajwadi Raita\n");
            printf("3: Burani Rajwadi Raita\n");
            printf("4: Anaar and Mint Rajwadi Raita\n");
            printf("5: Roasted Papad\n");
            printf("6: Fried Papad\n");
            printf("7: Plain Khichiya\n");
            printf("Enter:");
            scanf("%d", & Accompaniments);
            switch (Accompaniments)
            {
            case 1:
                printf("You Have Ordered Boondi Rajwadi Raita\n");
                break;
            case 2:
                printf("You Have Ordered Mixed Rajwadi Raita\n");
                break;
            case 3:
                printf("You Have Ordered Burani Rajwadi Raita\n");
                break;
            case 4:
                printf("You Have Ordered Anaar and Mint Rajwadi Raita\n");
                break;
            case 5:
                printf("You Have Ordered Roasted Papad\n");
                break;
            case 6:
                printf("You Have Ordered Fried Papad\n");
                break;
            case 7:
                printf("You Have Ordered Plain Khichiya\n");
                break;
            
            default:
                    printf("Invalid Input, Try Ordering Again");
                break;
            }
            break;
        case 10:
            printf("1: Hot Rodder\n");
            printf("2: Caramelised Apple Rabri\n");
            printf("Enter:");
            scanf("%d", & Desserts);
            switch (Desserts)
            {
            case 1:
                printf("You Have Ordered Hot Rodder\n");
                break;
            case 2:
                printf("You Have Ordered Caramelised Apple Rabri\n");
                break;
            
            default:
                    printf("Invalid Input, Try Ordering Again");
                break;
            }
            break;
        case 11:
            printf("1: Bisleri Mineral Water [1 litre]\n");
            printf("2: Plain Lassi\n");
            printf("3: Sweet Lassi\n");
            printf("4: Sweet Dry Fruit Lassi\n");
            printf("5: Plain Buttermilk\n");
            printf("6: Masala Buttermilk\n");
            printf("7: Plain Chaas\n");
            printf("8: Masala Chaas\n");
            printf("Enter:");
            scanf("%d", & Beverages);
            switch (Beverages)
            {
            case 1:
                printf("You Have Ordered Bisleri Mineral Water [1 litre]");
                break;
             case 2:
                printf("You Have Ordered Plain Lassi\n");
                break;
             case 3:
                printf("You Have Ordered Sweet Lassi\n");
                break;
             case 4:
                printf("You Have Ordered Sweet Dry Fruit Lassi\n");
                break;
             case 5:
                printf("You Have Ordered Plain Buttermilk\n");
                break;
             case 6:
                printf("You Have Ordered Masala Buttermilk\n");
                break;
             case 7:
                printf("You Have Ordered Plain Chaas\n");
                break;
             case 8:
                printf("You Have Ordered Masala Chaas\n");
                break;
            
            default:
                    printf("Invalid Input, Try Ordering Again");
                break;
            }
            break;
        case 12:
            printf("1: Liquid Marijuana Drink Shot\n");
            printf("2: Duck Fart Shot\n");
            printf("3: Red Headed Slut Shot\n");
            printf("4: Liquid Cocaine Shot\n");
            printf("5: Sex on the Beach Cocktail\n");
            printf("6: Shit on the Grass Shot\n");
            printf("7: Mint Lemonade\n");
            printf("8: Kiss On The Lips\n");
            printf("Enter:");
            scanf("%d", & MocktailsAndCocktails);
            switch (MocktailsAndCocktails)
            {
            case 1:
                printf("You Have Ordered Liquid Marijuana Drink Shot\n");
                break;
            case 2:
                printf("You Have Ordered Duck Fart Shot\n");
                break;
            case 3:
                printf("You Have Ordered Red Headed Slut Shot\n");
                break;
            case 4:
                printf("You Have Ordered Liquid Cocaine Shot\n");
                break;
            case 5:
                printf("You Have Ordered Sex on the Beach Cocktail\n");
                break;
            case 6:
                printf("You Have Ordered Shit on the Grass Shot\n");
                break;
            case 7:
                printf("You Have Ordered Mint Lemonade\n");
                break;
            case 8:
                printf("You Have Ordered Kiss On The Lips\n");
                break;
            
            default:
                    printf("Invalid Input, Try Ordering Again");
                break;
            }
            break;
        }
    }
    else{
        printf("\n Non - Veg Menu :-\n");
        printf("1: Starters\n");
        printf("2: Salads\n");
        printf("3: Soups\n");
        printf("4: Breads\n");
        printf("5: Rice And Biryani\n");
        printf("6: Main Course\n");
        printf("7: Special Mains\n");
        printf("8: Accompaniments\n");
        printf("9: Desserts\n");
        printf("10: Beverages\n");
        printf("11: Mocktails And Cocktails\n");
        printf("Enter:");
        scanf("%d", & non_veg); 
        switch (non_veg)
        {
        case 1:
            printf("1: Bhuna Ande\n");
            printf("2: Mechanics Gol Mirch Chicken Tikka\n");
            printf("3: Jims Chicken Tikka\n");
            printf("4: Murgh Shahtoosh Kebab\n");
            printf("5: Gilafi ke Seekh\n");
            printf("6: Stately Sikandari Raan\n");
            printf("7: Marque Macchi Tikka\n");
            printf("8: Calcutta Port Kasundi Macchi\n");
            printf("9: Dodges Drumsticks\n");
            printf("10: Shikaar Kothi Tandoori Platter\n");
            printf("Enter:");
            scanf("%d", & NV_Starters);
            switch (NV_Starters)
            {
            case 1:
                printf("You Have Ordered Bhuna Ande\n");
                break;
            case 2:
                printf("You Have Ordered Mechanics Gol Mirch Chicken Tikka\n");
                break;
            case 3:
                printf("You Have Ordered Jims Chicken Tikka\n");
                break;
            case 4:
                printf("You Have Ordered Murgh Shahtoosh Kebab\n");
                break;
            case 5:
                printf("You Have Ordered Gilafi ke Seekh\n");
                break;
            case 6:
                printf("You Have Ordered Stately Sikandari Raan\n");
                break;
            case 7:
                printf("You Have Ordered Marque Macchi Tikka\n");
                break;
            case 8:
                printf("You Have Ordered Calcutta Port Kasundi Macchi\n");
                break;
            case 9:
                printf("You Have Ordered Dodges Drumsticks\n");
                break;
            case 10:
                printf("You Have Ordered Shikaar Kothi Tandoori Platter\n");
                break;
            default:
                    printf("Invalid Input, Try Ordering Again\n");
                break;
            }
            break;
        case 2:
            printf("1: Green n Grilled Chicken Salad\n");
            printf("2: Chicken Caesar Salad\n");
            printf("Enter:");
            scanf("%d", & NV_Salads);
            switch (NV_Salads)
            {
            case 1:
                printf("You Have Ordered Green n Grilled Chicken Salad\n");
                break;
            case 2:
                printf("You Have Ordered Chicken Caesar Salad\n");
                break;
            
            default:
                    printf("Invalid Input, Try Ordering Again\n");
                break;
            }
            break;
        case 3:
            printf("1: Magnificent Murgh Makkai Shorba\n");
            printf("2: Travancore Pepper Chicken Rasam Soup\n");
            printf("3: Buicks Quick Mutton Soup\n");
            printf("Enter:");
            scanf("%d", & NV_Soups);
            switch (NV_Soups)
            {
            case 1:
                printf("You Have Ordered Magnificent Murgh Makkai Shorba\n");
                break;
            case 2:
                printf("You Have Ordered Travancore Pepper Chicken Rasam Soup\n");
                break;
            case 3:
                printf("You Have Ordered Buicks Quick Mutton Soup\n");
                break;
            
            default:
                    printf("Invalid Input, Try Ordering Again\n");
                break;
            }   
            break;
        case 4:
            printf("1: Plain Naan\n");
            printf("2: Butter Naan\n");
            printf("3: Garlic Naan\n");
            printf("4: Methi Lachha Parantha\n");
            printf("5: Chilli Cheese and Olive Parantha\n");
            printf("6: Bajre ka Sogra\n");
            printf("7: Amritsari Kulcha\n");
            printf("8: Tandoori Plain Roti\n");
            printf("9: Tandoori Butter Roti\n");
            printf("Enter:");
            scanf("%d", & Breads);
            switch (Breads)
            {
            case 1:
                printf("You Have Ordered Plain Naan\n");
                break;
            case 2:
                printf("You Have Ordered Butter Naan\n");
                break;
            case 3:
                printf("You Have Ordered Garlic Naan\n");
                break;
            case 4:
                printf("You Have Ordered Methi Lachha Parantha\n");
                break;
            case 5:
                printf("You Have Ordered Chilli Cheese and Olive Parantha\n");
                break;
            case 6:
                printf("You Have Ordered Bajre ka Sogra\n");
                break;
            case 7:
                printf("You Have Ordered Amritsari Kulcha\n");
                break;
            case 8:
                printf("You Have Ordered Tandoori Plain Roti\n");
                break;
            case 9:
                printf("You Have Ordered Tandoori Butter Roti\n");
                break;
            
            default:
                    printf("Invalid Input, Try Ordering Again");
                break;
            }
            break;
        case 5:
            printf("1: Lucknowi Murgh Biryani\n");
            printf("2: Quile Wali Kacche Gosht ki Biryani\n");
            printf("3: Imperial Kacche Gosht ki Biryani\n");
            printf("Enter:");
            scanf("%d", & NV_RiceAndBiryani);
            switch (NV_RiceAndBiryani)
            {
            case 1:
                printf("You Have Ordered Lucknowi Murgh Biryani\n");
                break;
            case 2:
                printf("You Have Ordered Quile Wali Kacche Gosht ki Biryani\n");
                break;
            case 3:
                printf("You Have Ordered Imperial Kacche Gosht ki Biryani\n");
                break;
            
            default:
                    printf("Invalid Input, Try Ordering Again\n");
                break;
            }
            break;
        case 6:
            printf("1: Patiala Butter Chicken\n");
            printf("2: Princely Mustard Chicken\n");
            printf("3: Chicken Khurchan\n");
            printf("4: Shahi Chicken\n");
            printf("5: Kolis Mutton Sukka\n");
            printf("6: Rolls Royce Rogan Josh\n");
            printf("7: Awadhi Nalli Nihari\n");
            printf("8: Fishermans Catch\n");
            printf("9: Zamindari Macher Kalia\n");
            printf("10: Pinstripe Prawns Pepper Curry\n");
            printf("Enter:");
            scanf("%d", & NV_MainCourse);
            switch (NV_MainCourse)
            {
            case 1:
                printf("You Have Ordered Patiala Butter Chicken\n");
                break;
            case 2:
                printf("You Have Ordered Princely Mustard Chicken\n");
                break;
            case 3:
                printf("You Have Ordered Chicken Khurchan\n");
                break;
            case 4:
                printf("You Have Ordered Kolis Mutton Sukka\n");
                break;
            case 5:
                printf("You Have Ordered Rolls Royce Rogan Josh\n");
                break;
            case 6:
                printf("You Have Ordered Awadhi Nalli Nihari\n");
                break;
            case 7:
                printf("You Have Ordered Fishermans Catch\n");
                break;
            case 8:
                printf("You Have Ordered Zamindari Macher Kalia\n");
                break;
            case 9:
                printf("You Have Ordered Pinstripe Prawns Pepper Curry\n");
                break;
            
            default:
                    printf("Invalid Input, Try Ordering Again\n");
                break;
            }
            break;
        case 7:
            printf("1: Mangalorean Chicken Roast with Curry Leaves\n");
            printf("2: Plymouth Pulled Butter Chicken\n");
            printf("3: Faridkot Meat Curry\n");
            printf("4: Malabari Marvel\n");
            printf("Enter:");
            scanf("%d", & NV_SpecialMains);
            switch (NV_SpecialMains)
            {
            case 1:
                printf("You Have Ordered Mangalorean Chicken Roast with Curry Leaves\n");
                break;
            case 2:
                printf("You Have Ordered Plymouth Pulled Butter Chicken\n");
                break;
            case 3:
                printf("You Have Ordered Faridkot Meat Curry\n");
                break;
            case 4:
                printf("You Have Ordered Malabari Marvel\n");
                break;
            
            default:
                    printf("Invalid Input, Try Ordering Again\n");
                break;
            }
            break;
        case 8:
            printf("1: Boondi Rajwadi Raita\n");
            printf("2: Mixed Rajwadi Raita\n");
            printf("3: Burani Rajwadi Raita\n");
            printf("4: Anaar and Mint Rajwadi Raita\n");
            printf("5: Roasted Papad\n");
            printf("6: Fried Papad\n");
            printf("7: Plain Khichiya\n");
            printf("Enter:");
            scanf("%d", & Accompaniments);
            switch (Accompaniments)
            {
            case 1:
                printf("You Have Ordered Boondi Rajwadi Raita\n");
                break;
            case 2:
                printf("You Have Ordered Mixed Rajwadi Raita\n");
                break;
            case 3:
                printf("You Have Ordered Burani Rajwadi Raita\n");
                break;
            case 4:
                printf("You Have Ordered Anaar and Mint Rajwadi Raita\n");
                break;
            case 5:
                printf("You Have Ordered Roasted Papad\n");
                break;
            case 6:
                printf("You Have Ordered Fried Papad\n");
                break;
            case 7:
                printf("You Have Ordered Plain Khichiya\n");
                break;
            
            default:
                    printf("Invalid Input, Try Ordering Again");
                break;
            }
            break;
        case 9:
            printf("1: Hot Rodder\n");
            printf("2: Caramelised Apple Rabri\n");
            printf("Enter:");
            scanf("%d", & Desserts);
            switch (Desserts)
            {
            case 1:
                printf("You Have Ordered Hot Rodder\n");
                break;
            case 2:
                printf("You Have Ordered Caramelised Apple Rabri\n");
                break;
            
            default:
                    printf("Invalid Input, Try Ordering Again");
                break;
            }
            break;
        case 10:
            printf("1: Bisleri Mineral Water [1 litre]\n");
            printf("2: Plain Lassi\n");
            printf("3: Sweet Lassi\n");
            printf("4: Sweet Dry Fruit Lassi\n");
            printf("5: Plain Buttermilk\n");
            printf("6: Masala Buttermilk\n");
            printf("7: Plain Chaas\n");
            printf("8: Masala Chaas\n");
            printf("Enter:");
            scanf("%d", & Beverages);
            switch (Beverages)
            {
            case 1:
                printf("You Have Ordered Bisleri Mineral Water [1 litre]");
                break;
             case 2:
                printf("You Have Ordered Plain Lassi\n");
                break;
             case 3:
                printf("You Have Ordered Sweet Lassi\n");
                break;
             case 4:
                printf("You Have Ordered Sweet Dry Fruit Lassi\n");
                break;
             case 5:
                printf("You Have Ordered Plain Buttermilk\n");
                break;
             case 6:
                printf("You Have Ordered Masala Buttermilk\n");
                break;
             case 7:
                printf("You Have Ordered Plain Chaas\n");
                break;
             case 8:
                printf("You Have Ordered Masala Chaas\n");
                break;
            
            default:
                    printf("Invalid Input, Try Ordering Again");
                break;
            }
            break;
        case 11:
            printf("1: Liquid Marijuana Drink Shot\n");
            printf("2: Duck Fart Shot\n");
            printf("3: Red Headed Slut Shot\n");
            printf("4: Liquid Cocaine Shot\n");
            printf("5: Sex on the Beach Cocktail\n");
            printf("6: Shit on the Grass Shot\n");
            printf("7: Mint Lemonade\n");
            printf("8: Kiss On The Lips\n");
            printf("Enter:");
            scanf("%d", & MocktailsAndCocktails);
            switch (MocktailsAndCocktails)
            {
            case 1:
                printf("You Have Ordered Liquid Marijuana Drink Shot\n");
                break;
            case 2:
                printf("You Have Ordered Duck Fart Shot\n");
                break;
            case 3:
                printf("You Have Ordered Red Headed Slut Shot\n");
                break;
            case 4:
                printf("You Have Ordered Liquid Cocaine Shot\n");
                break;
            case 5:
                printf("You Have Ordered Sex on the Beach Cocktail\n");
                break;
            case 6:
                printf("You Have Ordered Shit on the Grass Shot\n");
                break;
            case 7:
                printf("You Have Ordered Mint Lemonade\n");
                break;
            case 8:
                printf("You Have Ordered Kiss On The Lips\n");
                break;
            
            default:
                    printf("Invalid Input, Try Ordering Again");
                break;
            }
            break;
        }
    }
    }printf("We Are Preparing Your Order\n Do you want to order something else? (1 for Yes, 0 for No)\n");
      scanf("%d",& ContinueOrdering);
    }while (ContinueOrdering == 1);
    if (ContinueOrdering == 0)
    {
        printf("Enjoy Your Time Here");
    }
    
    return 0;
}