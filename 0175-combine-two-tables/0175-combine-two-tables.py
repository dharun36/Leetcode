import pandas as pd

def combine_two_tables(person: pd.DataFrame, address: pd.DataFrame) -> pd.DataFrame:
    res = pd.merge(person,address, on="personId", how="left")
    res = res[["firstName","lastName", "city" , "state"]]
    return res