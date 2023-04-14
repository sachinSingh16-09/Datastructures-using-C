package com.company;
import com.currencyConverter.*;
import com.distanceConverter.*;
import com.timeConverter.*;
public class Converter {
    public static void main(String[] args) {
        Converter obj1= new Converter();
        currencyC.rupees_to_dollars();
        currencyC.dollars_to_rupees();

        distanceC.km_to_meters();
        distanceC.km_to_miles();

        timeC.hours_to_minutes();
        timeC.hours_to_seconds();
    }
}
