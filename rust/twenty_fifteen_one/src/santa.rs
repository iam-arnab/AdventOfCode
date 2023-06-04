pub mod santa {
    pub fn floor(direction: String) -> i32 {
        let mut floor = 0;
        for c in direction.chars() {
            if c == '(' {
                floor += 1;
            } else if c == ')' {
                floor -= 1;
            } else {
                1;
            }
        }

        floor
    }
}

#[cfg(test)]
mod tests {
    use super::santa::floor;

    #[test]
    fn test_zero() {
        assert_eq!(floor(String::from("(())")), 0);
        assert_eq!(floor(String::from("()()")), 0);
    }

    #[test]
    fn test_positive() {
        assert_eq!(floor(String::from("(((")), 3);
        assert_eq!(floor(String::from("(()(()(")), 3);
    }

    #[test]
    fn test_negative() {
        assert_eq!(floor(String::from(")))")), -3);
        assert_eq!(floor(String::from("())")), -1);
    }
}
