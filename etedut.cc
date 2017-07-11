class Etedut {
  private string currentDigivolution;
  private string currentLevel;
  public String getName;
  public String getCurrentDigivolution;
  public String getCurrentLevel;
  public void digivolve;
  public void dedigivolve;
  public void megaDigivolve;

  public Etedut {
    currentDigivolution = "Etedut"
    currentLevel = "Ultimate"
  }

  public void digivolve {
    if currentLevel == "Ultimate" {
      currentDigivolution = "MetalEtedut"
      currentLevel = "Mega"
    }
  }

  public void dedigivolve {
    if currentLevel == "Mega" {
      currentDigivolution = "Etedut"
      currentLevel = "Ultimate"
    }
  }
}
