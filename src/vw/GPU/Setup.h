
#ifndef Setup_H
#define Setup_H

#include <fstream>

#include <vw/GPU/Utilities.h>
#include <vw/GPU/StandardShaders.h>


using namespace std;



namespace vw { namespace GPU {

extern GLuint g_framebuffer;

// Initialization

void gpu_init(bool dummyWindow = true, bool isLoggingEnabled = false);

// Settings


  enum ShaderLanguageChoiceEnum {
    SHADER_LANGUAGE_CHOICE_CG_GLSL,
    SHADER_LANGUAGE_CHOICE_GLSL_CG,
    SHADER_LANGUAGE_CHOICE_GLSL,
    SHADER_LANGUAGE_CHOICE_CG
  };

  inline const char* get_string_for_shader_language_choice_enum(ShaderLanguageChoiceEnum choice) {
    switch(choice) {
    case SHADER_LANGUAGE_CHOICE_CG_GLSL:
      return "SHADER_LANGUAGE_CHOICE_CG_GLSL";
    case SHADER_LANGUAGE_CHOICE_GLSL_CG:
      return "SHADER_LANGUAGE_CHOICE_GLSL_CG";
    case SHADER_LANGUAGE_CHOICE_GLSL:
      return "SHADER_LANGUAGE_CHOICE_GLSL";
    case SHADER_LANGUAGE_CHOICE_CG:
      return "SHADER_LANGUAGE_CHOICE_CG";
    }
  }

  extern ShaderLanguageChoiceEnum shaderLanguageChoice;


 void set_shader_language_choice(ShaderLanguageChoiceEnum choice);

 void set_gpu_memory_recycling(bool value);

// Logging

 void gpu_log(const char* string);



} } // namespace GPU, namespace vw

#endif

