fn main()
{

    let n: i32 = 5;
    let a: f32 =0.0;
    let b: f32 = 1.0;
    let h: f32 = (b-a)/((n-1) as f32);
    let mut x: f32; 
    let mut fx: f32;
    for i in 1..n+1{
        x = a+((i-1) as f32)*h;
        fx = 3f32.powf(x);
        println!("{} {} {}", i as i32, x,fx);
    }
}

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