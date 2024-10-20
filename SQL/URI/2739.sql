  select name, ROUND(CAST (EXTRACT(day FROM PAYDAY) AS NUMERIC)) as day
  from loan;