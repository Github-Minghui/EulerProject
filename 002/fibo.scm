;; Takes about 1 minuet to compute, while c++ only spent roughly 1 second 

(define (even-fib x result)
  (define fib
    (lambda (x)
      (cond
        ((= x 0) 1)
        ((= x 1) 1)
        (else (+ (fib (- x 1)) (fib (- x 2)))))))
  (cond 
    ((> (fib x) 4000000) result)
    ((even? (fib x)) (even-fib (+ x 1) (+ result (fib x))))
    (else (even-fib (+ x 1) result))))

