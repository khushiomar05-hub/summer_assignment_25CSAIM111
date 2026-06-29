#include <stdio.h>
#include <string.h>


struct Ticket {
    int bookingId;
    char passengerName[50];
    int seatNumber;
    char destination[50];
};

int main() {
    struct Ticket bookings[100]; 
    int totalBookings = 0;      
    int choice, searchId, found, i;
    int nextBookingId = 101;     
    int maxSeats = 40;           


    while(1) {
        printf("\n--- TICKET BOOKING SYSTEM ---\n");
        printf("1. Book a Ticket (Seats Left: %d)\n", maxSeats - totalBookings);
        printf("2. Display All Bookings\n");
        printf("3. Cancel a Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            
            if (totalBookings >= maxSeats) {
                printf("Sorry, all seats are fully booked!\n");
            } else {
                printf("\nYour Auto-Generated Booking ID is: %d\n", nextBookingId);
                bookings[totalBookings].bookingId = nextBookingId;
                getchar();

                printf("Enter Passenger Name: ");
                gets(bookings[totalBookings].passengerName);

                printf("Enter Destination: ");
                gets(bookings[totalBookings].destination);

                
                bookings[totalBookings].seatNumber = totalBookings + 1;
                printf("Seat allocated successfully! Your Seat No is: %d\n", bookings[totalBookings].seatNumber);

                totalBookings++;
                nextBookingId++;
                printf("Ticket booked successfully!\n");
            }

        } else if (choice == 2) {
        
            if (totalBookings == 0) {
                printf("No tickets booked yet!\n");
            } else {
                printf("\nID\tPassenger Name\t\tSeat No\tDestination\n");
                printf("-----------------------------------------------------------\n");
                for(i = 0; i < totalBookings; i++) {
                    printf("%d\t%-20s\t%d\t%s\n", 
                           bookings[i].bookingId, 
                           bookings[i].passengerName, 
                           bookings[i].seatNumber, 
                           bookings[i].destination);
                }
            }

        } else if (choice == 3) {
            // Cancel Logic
            printf("Enter Booking ID to cancel: ");
            scanf("%d", &searchId);
            found = 0;

            for(i = 0; i < totalBookings; i++) {
                if(bookings[i].bookingId == searchId) {
                    found = 1;
                    
                    
                    for(int j = i; j < totalBookings - 1; j++) {
                        bookings[j] = bookings[j + 1];
                    }
                    totalBookings--; 
                    printf("Ticket cancelled successfully!\n");
                    break;
                }
            }
            if(!found) printf("Booking ID not found!\n");

        } else if (choice == 4) {
            printf("Thank you for using our booking system!\n");
            break;
        } else {
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
