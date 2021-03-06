; spent 1 min and 20 secs, while js spent roughly 1 secs

(define (prime? x)
  (define (do-pri init x)
    (cond
      ((> init (sqrt x)) #t)
      ((zero? (modulo x init)) #f)
      (else (do-pri (+ init 1) x))))
  (do-pri 2 x))

(define (largest-prime-factor x)
  (define (do-lpf init x result)
    (cond
      ((> init (sqrt x)) result)
      ((prime? init)
       (cond
         ((zero? (modulo x init)) (do-lpf (+ init 1) x init))
         (else (do-lpf (+ init 1) x result))))
      (else (do-lpf (+ init 1) x result))))
  (if (prime? x)
      x
      (do-lpf 2 x 0)))

;(largest-prime-factor 600851475143)