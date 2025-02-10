#pragma once
// IWYU pragma private; include "UnityEngine/Font.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Font)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Font_FontTextureRebuildCallback;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
class Font_FontTextureRebuildCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Font);
MARK_REF_PTR_T(::UnityEngine::Font_FontTextureRebuildCallback);
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Font/FontTextureRebuildCallback
class CORDL_TYPE Font_FontTextureRebuildCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x3002c7c, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::UnityEngine::Font_FontTextureRebuildCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x3002bf4, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Font_FontTextureRebuildCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Font_FontTextureRebuildCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Font_FontTextureRebuildCallback(Font_FontTextureRebuildCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Font_FontTextureRebuildCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Font_FontTextureRebuildCallback(Font_FontTextureRebuildCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12293};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Font_FontTextureRebuildCallback, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Font
class CORDL_TYPE Font : public ::UnityEngine::Object {
public:
// Declarations
using FontTextureRebuildCallback = ::UnityEngine::Font_FontTextureRebuildCallback;

 __declspec(property(get=get_dynamic)) bool  dynamic;

 __declspec(property(get=get_fontSize)) int32_t  fontSize;

/// @brief Field m_FontTextureRebuildCallback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FontTextureRebuildCallback, put=__cordl_internal_set_m_FontTextureRebuildCallback)) ::UnityEngine::Font_FontTextureRebuildCallback*  m_FontTextureRebuildCallback;

 __declspec(property(get=get_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field textureRebuilt, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_textureRebuilt, put=setStaticF_textureRebuilt)) ::System::Action_1<::UnityW<::UnityEngine::Font>>*  textureRebuilt;

/// @brief Method HasCharacter, addr 0x3002b6c, size 0x44, virtual false, abstract: false, final false
inline bool HasCharacter(char16_t  c) ;

/// @brief Method HasCharacter, addr 0x3002bb0, size 0x44, virtual false, abstract: false, final false
inline bool HasCharacter(int32_t  c) ;

/// @brief Method InvokeTextureRebuilt_Internal, addr 0x3002ae0, size 0x8c, virtual false, abstract: false, final false
static inline void InvokeTextureRebuilt_Internal(::UnityEngine::Font*  font) ;

constexpr ::UnityEngine::Font_FontTextureRebuildCallback* const& __cordl_internal_get_m_FontTextureRebuildCallback() const;

constexpr ::UnityEngine::Font_FontTextureRebuildCallback*& __cordl_internal_get_m_FontTextureRebuildCallback() ;

constexpr void __cordl_internal_set_m_FontTextureRebuildCallback(::UnityEngine::Font_FontTextureRebuildCallback*  value) ;

/// @brief Method add_textureRebuilt, addr 0x30028d0, size 0xcc, virtual false, abstract: false, final false
static inline void add_textureRebuilt(::System::Action_1<::UnityW<::UnityEngine::Font>>*  value) ;

static inline ::System::Action_1<::UnityW<::UnityEngine::Font>>* getStaticF_textureRebuilt() ;

/// @brief Method get_dynamic, addr 0x3001960, size 0x3c, virtual false, abstract: false, final false
inline bool get_dynamic() ;

/// @brief Method get_fontSize, addr 0x3002aa4, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_fontSize() ;

/// @brief Method get_material, addr 0x3002a68, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_material() ;

/// @brief Method remove_textureRebuilt, addr 0x300299c, size 0xcc, virtual false, abstract: false, final false
static inline void remove_textureRebuilt(::System::Action_1<::UnityW<::UnityEngine::Font>>*  value) ;

static inline void setStaticF_textureRebuilt(::System::Action_1<::UnityW<::UnityEngine::Font>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Font() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Font", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Font(Font && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Font", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Font(Font const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12294};

/// @brief Field m_FontTextureRebuildCallback, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Font_FontTextureRebuildCallback*  ___m_FontTextureRebuildCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Font, ___m_FontTextureRebuildCallback) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Font, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Font);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Font*, "UnityEngine", "Font");
NEED_NO_BOX(::UnityEngine::Font_FontTextureRebuildCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Font_FontTextureRebuildCallback*, "UnityEngine", "Font/FontTextureRebuildCallback");
