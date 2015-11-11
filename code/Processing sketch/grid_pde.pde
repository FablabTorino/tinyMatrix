


//////////////MODEL//////////////



Cell[][] grid;
int cols = 5;
int rows = 7;
boolean func = false;
boolean tot = false;
int count =0;
int numb=1;


void setup() {
  size(250, 425);
  grid = new Cell[cols][rows];

  for (int i = 0; i < cols; i++) {
    for (int j = 0; j < rows; j++) {
      // Initialize each object
      grid[i][j] = new Cell(i*50, j*50, 50, 50, 0);
    }
  }
}




//////////////VIEW//////////////

void testo() {
  textAlign(CENTER);
  fill(255);
  textSize(12);
  text("Press 's' to print the frame", 125, 375); 
  text("Press 'a' when you finish", 125, 390); 
  text("and press 'n' to start a new session", 125, 405);
}



void draw() {

  background(0);

  if (func) { 
    func();
  }
  for (int i = 0; i < cols; i++) {
    for (int j = 0; j < rows; j++) {
      grid[i][j].Flagg();
      grid[i][j].display();
    }
  }  
  testo();
}

void func() {
  if (count==0) {
    println("");
    print("const PROGMEM uint8_t name");
    print(""+numb);
    println("[]={");
  }


  for (int i = 0; i < rows; i++) {
    print("B");
    for (int j = 0; j < cols; j++) {
      print(grid[j][i].flag);
    }

    print("000,");
    println("");
  }
  count=count+1;
  println("");
  func=false;
}


void tot() {
  print("}; // There are " +count );
  print(" frames");
  println("");
  numb++;

  tot=false;
}


void reset() {
  count=0;
  setup();
}







//////////////CONTROL//////////////


public class Cell {
  int x, y;  
  float w, h;  
  int flag;

  // Cell Constructor
  Cell(int tempX, int tempY, float tempW, float tempH, int tempflag) {
    x = tempX;
    y = tempY;
    w = tempW;
    h = tempH;
    flag = tempflag;
  } 


  void Flagg() {
    if (flag==1) {
      fill(255, 0, 0);
      noStroke();
      ellipse(x+25, y+25, 50, 50);
    }
  }

  void display() {
    stroke(255);
    noFill();
    rect(x, y, w, h);
  }
}



void mouseReleased() {
  int x=(int)mouseX/50;
  int y=(int)mouseY/50;
  if (grid[x][y].flag ==0) {
    grid[x][y] = new Cell((x)*50, (y)*50, 50, 50, 1);
  } else { 
    grid[x][y].flag=0;
  }
}

void mouseDragged() {
  int x=(int)mouseX/50;
  int y=(int)mouseY/50;


  if (grid[x][y].flag ==0) {
    grid[x][y] = new Cell((x)*50, (y)*50, 50, 50, 1);
  } else { 
    grid[x][y].flag=0;
  }
}





void keyPressed () {
  if (key=='s') func = !func;
  if (key=='a') tot();
  if (key=='n') reset();
}