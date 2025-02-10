#pragma once
// IWYU pragma private; include "UnityEngine/Input.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Input)
namespace UnityEngine {
class Gyroscope;
}
namespace UnityEngine {
struct IMECompositionMode;
}
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
struct PenData;
}
namespace UnityEngine {
struct Touch;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Input;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Input);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Input
class CORDL_TYPE Input : public ::System::Object {
public:
// Declarations
/// @brief Field s_MainGyro, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_MainGyro, put=setStaticF_s_MainGyro)) ::UnityEngine::Gyroscope*  s_MainGyro;

/// @brief Method CheckDisabled, addr 0x2fbdfa0, size 0x28, virtual false, abstract: false, final false
static inline bool CheckDisabled() ;

/// @brief Method ClearLastPenContactEvent, addr 0x2fbd8f8, size 0x28, virtual false, abstract: false, final false
static inline void ClearLastPenContactEvent() ;

/// @brief Method GetAxis, addr 0x2fbd4d4, size 0x3c, virtual false, abstract: false, final false
static inline float_t GetAxis(::StringW  axisName) ;

/// @brief Method GetAxisRaw, addr 0x2fbd54c, size 0x3c, virtual false, abstract: false, final false
static inline float_t GetAxisRaw(::StringW  axisName) ;

/// @brief Method GetButtonDown, addr 0x2fbd5c4, size 0x3c, virtual false, abstract: false, final false
static inline bool GetButtonDown(::StringW  buttonName) ;

/// @brief Method GetGyroInternal, addr 0x2fbdebc, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetGyroInternal() ;

/// @brief Method GetKey, addr 0x2fbd920, size 0x3c, virtual false, abstract: false, final false
static inline bool GetKey(::UnityEngine::KeyCode  key) ;

/// @brief Method GetKey, addr 0x2fbd95c, size 0x3c, virtual false, abstract: false, final false
static inline bool GetKey(::StringW  name) ;

/// @brief Method GetKeyDown, addr 0x2fbda88, size 0x3c, virtual false, abstract: false, final false
static inline bool GetKeyDown(::UnityEngine::KeyCode  key) ;

/// @brief Method GetKeyDown, addr 0x2fbdac4, size 0x3c, virtual false, abstract: false, final false
static inline bool GetKeyDown(::StringW  name) ;

/// @brief Method GetKeyDownInt, addr 0x2fbd6b4, size 0x3c, virtual false, abstract: false, final false
static inline bool GetKeyDownInt(::UnityEngine::KeyCode  key) ;

/// @brief Method GetKeyInt, addr 0x2fbd63c, size 0x3c, virtual false, abstract: false, final false
static inline bool GetKeyInt(::UnityEngine::KeyCode  key) ;

/// @brief Method GetKeyUp, addr 0x2fbd9d4, size 0x3c, virtual false, abstract: false, final false
static inline bool GetKeyUp(::UnityEngine::KeyCode  key) ;

/// @brief Method GetKeyUp, addr 0x2fbda10, size 0x3c, virtual false, abstract: false, final false
static inline bool GetKeyUp(::StringW  name) ;

/// @brief Method GetKeyUpInt, addr 0x2fbd678, size 0x3c, virtual false, abstract: false, final false
static inline bool GetKeyUpInt(::UnityEngine::KeyCode  key) ;

/// @brief Method GetLastPenContactEvent, addr 0x2fbd858, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::PenData GetLastPenContactEvent() ;

/// @brief Method GetLastPenContactEvent_Injected, addr 0x2fbd8bc, size 0x3c, virtual false, abstract: false, final false
static inline void GetLastPenContactEvent_Injected(::ByRef<::UnityEngine::PenData>  ret) ;

/// @brief Method GetMouseButton, addr 0x2fbd6f0, size 0x3c, virtual false, abstract: false, final false
static inline bool GetMouseButton(int32_t  button) ;

/// @brief Method GetMouseButtonDown, addr 0x2fbd72c, size 0x3c, virtual false, abstract: false, final false
static inline bool GetMouseButtonDown(int32_t  button) ;

/// @brief Method GetMouseButtonUp, addr 0x2fbd768, size 0x3c, virtual false, abstract: false, final false
static inline bool GetMouseButtonUp(int32_t  button) ;

/// @brief Method GetTouch, addr 0x2fbd7a4, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Touch GetTouch(int32_t  index) ;

/// @brief Method GetTouch_Injected, addr 0x2fbd814, size 0x44, virtual false, abstract: false, final false
static inline void GetTouch_Injected(int32_t  index, ::ByRef<::UnityEngine::Touch>  ret) ;

static inline ::UnityEngine::Gyroscope* getStaticF_s_MainGyro() ;

/// @brief Method get_anyKey, addr 0x2fbdb3c, size 0x28, virtual false, abstract: false, final false
static inline bool get_anyKey() ;

/// @brief Method get_anyKeyDown, addr 0x2fbdb64, size 0x28, virtual false, abstract: false, final false
static inline bool get_anyKeyDown() ;

/// @brief Method get_compositionCursorPos, addr 0x2fbdd48, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 get_compositionCursorPos() ;

/// @brief Method get_compositionCursorPos_Injected, addr 0x2fbdd8c, size 0x3c, virtual false, abstract: false, final false
static inline void get_compositionCursorPos_Injected(::ByRef<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_compositionString, addr 0x2fbdd20, size 0x28, virtual false, abstract: false, final false
static inline ::StringW get_compositionString() ;

/// @brief Method get_gyro, addr 0x2fbdee4, size 0xbc, virtual false, abstract: false, final false
static inline ::UnityEngine::Gyroscope* get_gyro() ;

/// @brief Method get_imeCompositionMode, addr 0x2fbdcbc, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::IMECompositionMode get_imeCompositionMode() ;

/// @brief Method get_inputString, addr 0x2fbdb8c, size 0x28, virtual false, abstract: false, final false
static inline ::StringW get_inputString() ;

/// @brief Method get_mousePosition, addr 0x2fbdbb4, size 0x4c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_mousePosition() ;

/// @brief Method get_mousePosition_Injected, addr 0x2fbdc00, size 0x3c, virtual false, abstract: false, final false
static inline void get_mousePosition_Injected(::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_mousePresent, addr 0x2fbde44, size 0x28, virtual false, abstract: false, final false
static inline bool get_mousePresent() ;

/// @brief Method get_mouseScrollDelta, addr 0x2fbdc3c, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 get_mouseScrollDelta() ;

/// @brief Method get_mouseScrollDelta_Injected, addr 0x2fbdc80, size 0x3c, virtual false, abstract: false, final false
static inline void get_mouseScrollDelta_Injected(::ByRef<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_touchCount, addr 0x2fbde6c, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_touchCount() ;

/// @brief Method get_touchSupported, addr 0x2fbde94, size 0x28, virtual false, abstract: false, final false
static inline bool get_touchSupported() ;

static inline void setStaticF_s_MainGyro(::UnityEngine::Gyroscope*  value) ;

/// @brief Method set_compositionCursorPos, addr 0x2fbddc8, size 0x40, virtual false, abstract: false, final false
static inline void set_compositionCursorPos(::UnityEngine::Vector2  value) ;

/// @brief Method set_compositionCursorPos_Injected, addr 0x2fbde08, size 0x3c, virtual false, abstract: false, final false
static inline void set_compositionCursorPos_Injected(::ByRef<::UnityEngine::Vector2>  value) ;

/// @brief Method set_imeCompositionMode, addr 0x2fbdce4, size 0x3c, virtual false, abstract: false, final false
static inline void set_imeCompositionMode(::UnityEngine::IMECompositionMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Input() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Input", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Input(Input && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Input", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Input(Input const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12277};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Input, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Input);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Input*, "UnityEngine", "Input");
