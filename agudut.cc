class Agudut {
  private string name;
  private string currentDigivolution;
  private string currentLevel;
  public String getName;
  public String getCurrentDigivolution;
  public String getCurrentLevel;
  public void digivolve;
  public void dedigivolve;

  public Agudut {
    currentDigivolution = "Agudut"
    currentLevel = "Rookie"
  }

  public void digivolve {
    if currentLevel == "Rookie" {
      currentDigivolution = "Greydut"
      currentLevel = "Champion"
    }
  }

  public void dedigivolve {
    if currentLevel == "Greydut" {
      currentDigivolution = "Agudut"
      currentLevel = "Rookie"
    }
  }
}
