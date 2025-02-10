#pragma once
// IWYU pragma private; include "VROSC/UI/TextureUtil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextureUtil)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace VROSC::UI {
class TextureUtil;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::TextureUtil);
// Dependencies System.Object
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.TextureUtil
class CORDL_TYPE TextureUtil : public ::System::Object {
public:
// Declarations
/// @brief Field SwatchSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SwatchSize, put=setStaticF_SwatchSize)) int32_t  SwatchSize;

/// @brief Method CreateSwatch, addr 0x17e8df0, size 0x88, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> CreateSwatch(::UnityEngine::Color  color, int32_t  size) ;

/// @brief Method CreateSwatch, addr 0x17e8e78, size 0xc0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> CreateSwatch(::UnityEngine::Color  color, int32_t  width, int32_t  height) ;

/// @brief Method GetSwatch, addr 0x17e6ba0, size 0x258, virtual false, abstract: false, final false
static inline ::UnityEngine::Color GetSwatch(::UnityEngine::Texture2D*  texture, int32_t  index, int32_t  place) ;

/// @brief Method WriteSwatch, addr 0x17e6ebc, size 0x114, virtual false, abstract: false, final false
static inline void WriteSwatch(::UnityEngine::Texture2D*  texture, ::UnityEngine::Color  color, int32_t  index, int32_t  place) ;

static inline int32_t getStaticF_SwatchSize() ;

static inline void setStaticF_SwatchSize(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureUtil", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureUtil(TextureUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureUtil", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureUtil(TextureUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1628};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::UI::TextureUtil, 0x10>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::TextureUtil);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::TextureUtil*, "VROSC.UI", "TextureUtil");
