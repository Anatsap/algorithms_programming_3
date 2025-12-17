fn scalar_mul(matrix: &Vec<Vec<i32>>, scalar: f64) -> Vec<Vec<f64>> {
    let rows = matrix.len();
    let cols = matrix[0].len();
    let mut result = vec![vec![0.0; cols]; rows];
    for i in 0..rows {
        for j in 0..cols {
            result[i][j] = matrix[i][j] as f64 * scalar;
        }
    }

    result
}

fn add(a: &Vec<Vec<f64>>, b: &Vec<Vec<f64>>) -> Vec<Vec<f64>> {
    let rows = a.len();
    let cols = a[0].len();
    let mut result = vec![vec![0.0; cols]; rows];
    for i in 0..rows {
        for j in 0..cols {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    result
}

fn sub(a: &Vec<Vec<f64>>, b: &Vec<Vec<f64>>) -> Vec<Vec<f64>> {
    let rows = a.len();
    let cols = a[0].len();
    let mut result = vec![vec![0.0; cols]; rows];
    for i in 0..rows {
        for j in 0..cols {
            result[i][j] = a[i][j] - b[i][j];
        }
    }

    result
}



fn main()
{   
    let scalar1 = 0.7;
    let scalar2 = 0.2;
    let scalar3 = 2.3;
    let scalar4 = 0.6;
    let m = vec![
        vec![-1, 1, 3, -1],
        vec![2, 1, 2, 0],
        vec![-1, 0, 0, 2],
        vec![-1, 2, 1, 1],
        ];
        
    let d = vec![
        vec![1, 1, 0, -1],
        vec![-2, 1, -2, 0],
        vec![-1, 0, 1, 2],
        vec![-1, 2, 3, 1],
        ];
    let a = vec![
        vec![-1, 0, 1, 1],
        vec![2, 1, -1, 3],
        vec![-1, 0, 3, 2],
        vec![1, 2, 2, 1],
        ];
    let r = vec![
        vec![-1],
        vec![1],
        vec![-3],
        vec![4],
        ];
    let t = vec![
        vec![1],
        vec![2],
        vec![0],
        vec![5],
        ];

    let rows_m = m.len();
    let cols_m = m[0].len();
    let rows_d = d.len();
    let cols_d = d[0].len();
    if cols_m != rows_d {
        panic!("Cannot multiply matrices: columns of M must equal
        rows of D");
    }
    let mut md = vec![vec![0; cols_d]; rows_m];
    for i in 0..rows_m {

        for j in 0..cols_d {
            for k in 0..cols_m {
                md[i][j] += m[i][k] * d[k][j];
            }
        }
    }
    println!("Matrix Multiplication  M * D :");
    for row in &md {
        println!("{:?}", row);
    }
    let md1 = scalar_mul(&md, scalar1);
    let a1 = scalar_mul(&a, scalar2);
    let r1 = scalar_mul(&r, scalar3);
    let t1 = scalar_mul(&t, scalar4);

    let mda = sub(&md1, &a1);
    let rt = add(&r1, &t1);

    let rows_mda = mda.len();
    let cols_mda = mda[0].len();
    let rows_rt = rt.len();
    let cols_rt = rt[0].len();
    if cols_mda != rows_rt {
        panic!("Cannot multiply matrices");
    }

    let mut result = vec![vec![0.0; cols_rt]; rows_mda];
    for i in 0..rows_mda {

        for j in 0..cols_rt {
            for k in 0..cols_mda {
                result[i][j] += mda[i][k] * rt[k][j];
            }
        }
    }
    println!(" Result (0.7MD - 0.2A )(2.3r + 0.6t ):");
    for row in &result {
        println!("{:?}", row);
    }
}

