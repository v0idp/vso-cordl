#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/StringPluginExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringPluginExtensions)
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace DG::Tweening::Plugins {
class StringPluginExtensions;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Plugins::StringPluginExtensions);
// Dependencies System.Object
namespace DG::Tweening::Plugins {
// Is value type: false
// CS Name: DG.Tweening.Plugins.StringPluginExtensions
class CORDL_TYPE StringPluginExtensions : public ::System::Object {
public:
// Declarations
/// @brief Field ScrambledCharsAll, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ScrambledCharsAll, put=setStaticF_ScrambledCharsAll)) ::ArrayW<char16_t,::Array<char16_t>*>  ScrambledCharsAll;

/// @brief Field ScrambledCharsLowercase, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ScrambledCharsLowercase, put=setStaticF_ScrambledCharsLowercase)) ::ArrayW<char16_t,::Array<char16_t>*>  ScrambledCharsLowercase;

/// @brief Field ScrambledCharsNumerals, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ScrambledCharsNumerals, put=setStaticF_ScrambledCharsNumerals)) ::ArrayW<char16_t,::Array<char16_t>*>  ScrambledCharsNumerals;

/// @brief Field ScrambledCharsUppercase, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ScrambledCharsUppercase, put=setStaticF_ScrambledCharsUppercase)) ::ArrayW<char16_t,::Array<char16_t>*>  ScrambledCharsUppercase;

/// @brief Field _lastRndSeed, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__lastRndSeed, put=setStaticF__lastRndSeed)) int32_t  _lastRndSeed;

/// @brief Method AppendScrambledChars, addr 0x18df278, size 0x128, virtual false, abstract: false, final false
static inline ::System::Text::StringBuilder* AppendScrambledChars(::System::Text::StringBuilder*  buffer, int32_t  length, ::ArrayW<char16_t,::Array<char16_t>*>  chars) ;

/// @brief Method ScrambleChars, addr 0x18df62c, size 0xa0, virtual false, abstract: false, final false
static inline void ScrambleChars(::ArrayW<char16_t,::Array<char16_t>*>  chars) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_ScrambledCharsAll() ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_ScrambledCharsLowercase() ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_ScrambledCharsNumerals() ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_ScrambledCharsUppercase() ;

static inline int32_t getStaticF__lastRndSeed() ;

static inline void setStaticF_ScrambledCharsAll(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline void setStaticF_ScrambledCharsLowercase(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline void setStaticF_ScrambledCharsNumerals(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline void setStaticF_ScrambledCharsUppercase(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline void setStaticF__lastRndSeed(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringPluginExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringPluginExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StringPluginExtensions(StringPluginExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringPluginExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringPluginExtensions(StringPluginExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10804};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::StringPluginExtensions, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins
NEED_NO_BOX(::DG::Tweening::Plugins::StringPluginExtensions);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::StringPluginExtensions*, "DG.Tweening.Plugins", "StringPluginExtensions");
