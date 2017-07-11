class Gabudut {
  private string name;
  private string currentDigivolution;
  private string currentLevel;
  public String getName;
  public String getCurrentDigivolution;
  public String getCurrentLevel;
  public void digivolve;
  public void dedigivolve;

  public Gabudut {
    currentDigivolution = "Gabudut"
    currentLevel = "Rookie"
  }

  public void digivolve {
    if currentLevel == "Rookie" {
      currentDigivolution = "Garurudut"
      currentLevel = "Champion"
    }
  }

  public void dedigivolve {
    if currentLevel == "Garurudut" {
      currentDigivolution = "Gabudut"
      currentLevel = "Rookie"
    }
  }
}
