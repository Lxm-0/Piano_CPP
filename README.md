 # Virtual Piano Application - C++ with SDL
 
*ملاحضه* قمت بحذف بعض الاصوات ليكون اسرع بالتحميل, كل ماتحتاجه هو نسخ ملف ؛Piano.cpp وتضمين المكاتب اعلاه في visual studio, ثم تحميل الاصوات التي ترغب بسماعها عند الضغط على الازار وتسميتها بنفس الاسماء الموجوده في الكود او تعديلها اذا لزم الامر


<img width="1481" height="724" alt="Screenshot 2025-09-30 010229" src="https://github.com/user-attachments/assets/13b7d0bb-a0e5-4909-8af4-4bd2d299d9c4" />



A feature-rich virtual piano application built using C++ with Object-Oriented Programming principles and SDL for audio playback, featuring interactive keyboard controls and visual piano displays.

## 🎹 Features

### 1. **Interactive Virtual Piano**
- Two distinct visual representations:
  - **White Instrumental**: Clean piano keyboard layout
  - **Grey Instrumental**: Enhanced visual with black keys representation
- Real-time keyboard input mapping (A-Z keys)
- Visual feedback through console-based piano display

### 2. **High-Quality Audio System**
- SDL2 and SDL_mixer for cross-platform audio playback
- Multiple audio channels for simultaneous note playback
- Professional-grade piano sound samples
- Support for 32 concurrent audio channels

### 3. **Object-Oriented Architecture**
- Clean class hierarchy with inheritance
- Polymorphic behavior for different piano displays
- Encapsulated audio management system
- Extensible design for additional instruments

## 🛠️ Technical Implementation

### **Class Structure**
```cpp
1. White_insturmental (Base Class)
   ├── Virtual piano() method for white key display
   └── ANSI escape codes for console coloring

2. Grey_insturmental (Derived Class)
   ├── Overridden piano() method with black keys
   └── Advanced console graphics with background patterns

3. Character (Base Class)
   └── OK() method for ASCII art display

4. Tones (Derived from Character)
   ├── music() method for audio management
   └── SDL audio initialization and playback
```

### **Key Technical Components**
1. **Console Graphics**: 
   - ANSI escape sequences for colors and positioning
   - Real-time piano keyboard rendering
   - ASCII art integration

2. **Audio Engine**:
   - SDL audio subsystem initialization
   - WAV file loading and caching
   - Channel allocation and management
   - Non-blocking audio playback

3. **Input System**:
   - `_kbhit()` and `_getch()` for real-time keyboard input
   - Key-to-sound mapping system
   - Case-insensitive key handling

### **File Structure**
```
Project/
├── Main.cpp
├── Debug/ (Sound Files)
│   ├── Ab3.wav
│   ├── C7.wav
│   ├── D7.wav
│   └── ... (30+ sound samples)
└── (Dependencies)
    ├── SDL2.dll
    ├── SDL2_mixer.dll
    └── Other SDL libraries
```

## 🎵 Sound Library

### **Available Notes**
- **Natural Notes**: A, S, D, F, G, H, J, K, L
- **Accidentals**: Z, X, C, V, B, N, M
- **Extended Range**: Q, W, E, R, T, Y, U, I, O, P

### **Sound Samples**
- Multiple octaves supported (C3 to C7)
- Individual WAV files for each key
- Professional piano recordings
- Balanced volume levels

## 🔧 Setup & Requirements

### **Dependencies**
- C++17 or higher
- SDL2 Library
- SDL2_mixer Library
- Windows Console API (for `conio.h`)

### **Build Instructions**

1. **Install SDL2:**
```bash
# Using vcpkg
vcpkg install sdl2 sdl2-mixer
```

2. **Compilation:**
```bash
g++ -o VirtualPiano main.cpp -lSDL2 -lSDL2_mixer
# Or with Visual Studio
cl /EHsc main.cpp /I SDL2\include /link SDL2\lib\SDL2.lib SDL2_mixer\lib\SDL2_mixer.lib
```

3. **Required Files:**
   - Place all `.wav` files in `Debug/` directory
   - Copy SDL2.dll and SDL2_mixer.dll to executable directory

## 🎮 Usage

### **Basic Controls**
1. Run the application
2. View the piano interface in console
3. Press letter keys (A-Z) to play notes
4. Press `ESC` to exit

### **Keyboard Layout**
```
White Keys: A S D F G H J K L
Black Keys: Z X C V B N M
Extended:   Q W E R T Y U I O P
```

## 💡 Technical Highlights

### **Performance Optimizations**
- Sound preloading and caching
- Channel pooling for efficient audio playback
- Non-blocking input handling
- Minimal CPU usage during idle state

### **Cross-Platform Considerations**
- SDL for portable audio and input
- Console graphics using ANSI standards
- File path handling with raw string literals

### **Object-Oriented Design Patterns**
1. **Inheritance**: Base and derived classes for display variants
2. **Polymorphism**: Virtual methods for different piano displays
3. **Encapsulation**: Audio management within Tones class
4. **Composition**: Sound mapping with STL containers

### **Memory Management**
- RAII principles for SDL resources
- Smart pointer consideration for future improvements
- Proper cleanup in destructors

## 🚀 Future Enhancements

### **Planned Features**
1. **GUI Integration**: SDL window with graphical piano
2. **MIDI Support**: External MIDI controller compatibility
3. **Recording Feature**: Save and playback compositions
4. **Multiple Instruments**: Piano, guitar, drums, etc.
5. **Effects System**: Reverb, chorus, sustain

### **Technical Improvements**
- Replace console graphics with SDL rendering
- Implement threading for better responsiveness
- Add configuration file support
- Create installer package

## 📁 Project Structure Recommendation

```
VirtualPiano/
├── src/
│   ├── main.cpp
│   ├── PianoDisplay.cpp/.h
│   ├── AudioManager.cpp/.h
│   └── InputHandler.cpp/.h
├── assets/
│   └── sounds/
│       ├── piano/
│       └── (other instruments)/
├── docs/
│   └── architecture.md
├── CMakeLists.txt
└── README.md
```

## 🎯 Educational Value

This project demonstrates:
- **C++ OOP Principles**: Inheritance, polymorphism, encapsulation
- **Multimedia Programming**: Audio playback and mixing
- **Console Graphics**: Advanced text-based interfaces
- **Game Development Patterns**: Real-time input, resource management
- **Cross-Platform Development**: Using SDL for portability

## ⚠️ Known Limitations

1. **Windows-only input**: Uses `conio.h` for keyboard input
2. **Console dependency**: Requires ANSI support
3. **Fixed sound mapping**: Hardcoded key-to-note mapping
4. **Limited visual feedback**: Console-only display

## 🤝 Contributing

Contributions welcome! Areas for contribution:
- Linux/macOS port
- GUI implementation
- Additional instruments
- Music theory features (chords, scales)

---

*This project showcases advanced C++ programming with multimedia integration, demonstrating practical application of OOP principles in a creative and interactive context. Perfect for musicians learning programming or developers exploring audio applications.*
