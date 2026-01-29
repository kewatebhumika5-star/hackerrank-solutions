 int sum = 0;

    if (gender == 'b') {
        // Boys at index: 0, 2, 4, ...
        for (int i = 0; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    } 
    else if (gender == 'g') {
        // Girls at index: 1, 3, 5, ...
        for (int i = 1; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    }

    return sum;
}
