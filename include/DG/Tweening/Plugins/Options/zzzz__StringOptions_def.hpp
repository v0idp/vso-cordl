#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Options/StringOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Plugins/Options/zzzz__IPlugOptions_def.hpp"
#include "DG/Tweening/zzzz__ScrambleMode_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StringOptions)
// Forward declare root types
namespace DG::Tweening::Plugins::Options {
struct StringOptions;
}
// Write type traits
MARK_VAL_T(::DG::Tweening::Plugins::Options::StringOptions);
// Dependencies DG.Tweening.Plugins.Options.IPlugOptions, DG.Tweening.ScrambleMode
namespace DG::Tweening::Plugins::Options {
// Is value type: true
// CS Name: DG.Tweening.Plugins.Options.StringOptions
struct CORDL_TYPE StringOptions {
public:
// Declarations
/// @brief Convert operator to "::DG::Tweening::Plugins::Options::IPlugOptions"
constexpr operator  ::DG::Tweening::Plugins::Options::IPlugOptions*() ;

/// @brief Method Reset, addr 0x18e0908, size 0x14, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Convert to "::DG::Tweening::Plugins::Options::IPlugOptions"
constexpr ::DG::Tweening::Plugins::Options::IPlugOptions* i___DG__Tweening__Plugins__Options__IPlugOptions() ;

// Ctor Parameters []
// @brief default ctor
constexpr StringOptions() ;

// Ctor Parameters [CppParam { name: "richTextEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "scrambleMode", ty: "::DG::Tweening::ScrambleMode", modifiers: "", def_value: None }, CppParam { name: "scrambledChars", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: None }, CppParam { name: "startValueStrippedLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "changeValueStrippedLength", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StringOptions(bool  richTextEnabled, ::DG::Tweening::ScrambleMode  scrambleMode, ::ArrayW<char16_t,::Array<char16_t>*>  scrambledChars, int32_t  startValueStrippedLength, int32_t  changeValueStrippedLength) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10817};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field richTextEnabled, offset: 0x0, size: 0x1, def value: None
 bool  richTextEnabled;

/// @brief Field scrambleMode, offset: 0x4, size: 0x4, def value: None
 ::DG::Tweening::ScrambleMode  scrambleMode;

/// @brief Field scrambledChars, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<char16_t,::Array<char16_t>*>  scrambledChars;

/// @brief Field startValueStrippedLength, offset: 0x10, size: 0x4, def value: None
 int32_t  startValueStrippedLength;

/// @brief Field changeValueStrippedLength, offset: 0x14, size: 0x4, def value: None
 int32_t  changeValueStrippedLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Plugins::Options::StringOptions, richTextEnabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::StringOptions, scrambleMode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::StringOptions, scrambledChars) == 0x8, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::StringOptions, startValueStrippedLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::StringOptions, changeValueStrippedLength) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::Options::StringOptions, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins::Options
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Options::StringOptions, "DG.Tweening.Plugins.Options", "StringOptions");
