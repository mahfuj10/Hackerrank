
function solve(meal_cost, tip_percent, tax_percent) {

    const tip = (meal_cost / 100) * tip_percent;
    const tax = (meal_cost / 100) * tax_percent;
    const tip_tax = tip + tax;
    let totalCost = meal_cost + tip_tax;
    
    const round = Math.round(totalCost);
    
    console.log(round);
    
    }
    