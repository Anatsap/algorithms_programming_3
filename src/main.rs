use rand::Rng; 

fn main() {
    let mut rng = rand::rng();
    let mut vec: Vec<f64> = Vec::with_capacity(49);
    for _ in 0..49 {
        vec.push(rng.random_range(-100.0..100.0)); 
    }
    let mut fir_positive = f64::INFINITY; 
    let mut sec_positive = f64::INFINITY; 
    let mut fir_negative = f64::NEG_INFINITY; 
    let mut sec_negative = f64::NEG_INFINITY;
    let mut sum = 0.0; 

    let mut i = 0;
    while i < vec.len() {
        let val = vec[i];
        if val > 0.0 {
            if val < fir_positive {
                sec_positive = fir_positive;
                fir_positive = val;
            } else if val < sec_positive {
                sec_positive = val;
            }
        }
        i += 1;
    }
    i = 0;
    while i < vec.len() {
        let val = vec[i];
        if val < 0.0 {
            if val > fir_negative {
                sec_negative = fir_negative;
                fir_negative = val;
            } else if val > sec_negative {
                sec_negative = val;
            }
        }
        i += 1;
    }
    
    for &val in &vec {
        if val > sec_negative && val < sec_positive {
            sum += val.powi(4);
        }
    }

    println!("Array: {:?}", vec);
    println!("Second smallest positive: {}", sec_positive);
    println!("Second largest negative: {}", sec_negative);
    println!("Sum of fourth powers in range: {}", sum);
}
