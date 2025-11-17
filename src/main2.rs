fn fact(n: u64) -> u64 {
    if n == 0 {
        1 
    } else {
        n * fact(n - 1) 
    }
}


fn main()
{
    let mut delta: f64 = 0.1;
    while delta >= 0.000001{

        let mut n: u64 = 0;
        let mut sum: f64 = 0.0;
        let mut an: f64 = 1.0;

        while an > delta{
            an = 1.0 / ((fact(n) as f64) * ((n + 3) as f64));
            sum += an;
            n += 1;        
            println!("Accurancy: {}", delta);
            println!("Quantity of terms: {}", n);
            println!("Sum: {}", sum);
        }
        delta = delta / 10.0;
    }
}