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

