#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/StringPlugin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Plugins/Core/zzzz__ABSTweenPlugin_3_def.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__StringOptions_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StringPlugin)
namespace DG::Tweening::Core::Enums {
struct UpdateNotice;
}
namespace DG::Tweening::Core {
template<typename T>
class DOGetter_1;
}
namespace DG::Tweening::Core {
template<typename T>
class DOSetter_1;
}
namespace DG::Tweening::Core {
template<typename T1,typename T2,typename TPlugOptions>
class TweenerCore_3;
}
namespace DG::Tweening::Plugins::Options {
struct StringOptions;
}
namespace DG::Tweening {
class Tween;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace DG::Tweening::Plugins {
class StringPlugin;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Plugins::StringPlugin);
// Dependencies DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1, T2, TPlugOptions>, DG.Tweening.Plugins.Options.StringOptions
namespace DG::Tweening::Plugins {
// Is value type: false
// CS Name: DG.Tweening.Plugins.StringPlugin
class CORDL_TYPE StringPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::StringW,::StringW,::DG::Tweening::Plugins::Options::StringOptions> {
public:
// Declarations
/// @brief Field _Buffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Buffer, put=setStaticF__Buffer)) ::System::Text::StringBuilder*  _Buffer;

/// @brief Field _OpenedTags, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__OpenedTags, put=setStaticF__OpenedTags)) ::System::Collections::Generic::List_1<char16_t>*  _OpenedTags;

/// @brief Method Append, addr 0x18deab8, size 0x6bc, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* Append(::StringW  value, int32_t  startIndex, int32_t  length, bool  richTextEnabled) ;

/// @brief Method ConvertToStartValue, addr 0x18de520, size 0x8, virtual true, abstract: false, final false
inline ::StringW ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::StringW,::StringW,::DG::Tweening::Plugins::Options::StringOptions>*  t, ::StringW  value) ;

/// @brief Method EvaluateAndApply, addr 0x18de63c, size 0x47c, virtual true, abstract: false, final false
inline void EvaluateAndApply(::DG::Tweening::Plugins::Options::StringOptions  options, ::DG::Tweening::Tween*  t, bool  isRelative, ::DG::Tweening::Core::DOGetter_1<::StringW>*  getter, ::DG::Tweening::Core::DOSetter_1<::StringW>*  setter, float_t  elapsed, ::StringW  startValue, ::StringW  changeValue, float_t  duration, bool  usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice  updateNotice) ;

/// @brief Method GetSpeedBasedDuration, addr 0x18de5fc, size 0x40, virtual true, abstract: false, final false
inline float_t GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::StringOptions  options, float_t  unitsXSecond, ::StringW  changeValue) ;

static inline ::DG::Tweening::Plugins::StringPlugin* New_ctor() ;

/// @brief Method Reset, addr 0x18de504, size 0x1c, virtual true, abstract: false, final false
inline void Reset(::DG::Tweening::Core::TweenerCore_3<::StringW,::StringW,::DG::Tweening::Plugins::Options::StringOptions>*  t) ;

/// @brief Method ScrambledCharsToUse, addr 0x18df174, size 0x104, virtual false, abstract: false, final false
inline ::ArrayW<char16_t,::Array<char16_t>*> ScrambledCharsToUse(::DG::Tweening::Plugins::Options::StringOptions  options) ;

/// @brief Method SetChangeValue, addr 0x18de52c, size 0xd0, virtual true, abstract: false, final false
inline void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::StringW,::StringW,::DG::Tweening::Plugins::Options::StringOptions>*  t) ;

/// @brief Method SetFrom, addr 0x18de4c4, size 0x40, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<::StringW,::StringW,::DG::Tweening::Plugins::Options::StringOptions>*  t, ::StringW  fromValue, bool  setImmediately) ;

/// @brief Method SetFrom, addr 0x18de46c, size 0x58, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<::StringW,::StringW,::DG::Tweening::Plugins::Options::StringOptions>*  t, bool  isRelative) ;

/// @brief Method SetRelativeEndValue, addr 0x18de528, size 0x4, virtual true, abstract: false, final false
inline void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::StringW,::StringW,::DG::Tweening::Plugins::Options::StringOptions>*  t) ;

/// @brief Method .ctor, addr 0x18df3a0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Text::StringBuilder* getStaticF__Buffer() ;

static inline ::System::Collections::Generic::List_1<char16_t>* getStaticF__OpenedTags() ;

static inline void setStaticF__Buffer(::System::Text::StringBuilder*  value) ;

static inline void setStaticF__OpenedTags(::System::Collections::Generic::List_1<char16_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringPlugin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringPlugin", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StringPlugin(StringPlugin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringPlugin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringPlugin(StringPlugin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10803};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::StringPlugin, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins
NEED_NO_BOX(::DG::Tweening::Plugins::StringPlugin);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::StringPlugin*, "DG.Tweening.Plugins", "StringPlugin");
