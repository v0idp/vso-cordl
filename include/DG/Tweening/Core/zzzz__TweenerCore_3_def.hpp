#pragma once
// IWYU pragma private; include "DG/Tweening/Core/TweenerCore_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/zzzz__Tweener_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TweenerCore_3)
namespace DG::Tweening::Core::Enums {
struct UpdateMode;
}
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
namespace DG::Tweening::Plugins::Core {
template<typename T1,typename T2,typename TPlugOptions>
class ABSTweenPlugin_3;
}
namespace DG::Tweening {
class Tweener;
}
namespace System {
class Object;
}
// Forward declare root types
namespace DG::Tweening::Core {
template<typename T1,typename T2,typename TPlugOptions>
class TweenerCore_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::DG::Tweening::Core::TweenerCore_3);
// Dependencies DG.Tweening.Tweener
namespace DG::Tweening::Core {
// cpp template
template<typename T1,typename T2,typename TPlugOptions>
// Is value type: false
// CS Name: DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>
class CORDL_TYPE TweenerCore_3 : public ::DG::Tweening::Tweener {
public:
// Declarations
/// @brief Field changeValue, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_changeValue, put=__cordl_internal_set_changeValue)) T2  changeValue;

/// @brief Field endValue, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_endValue, put=__cordl_internal_set_endValue)) T2  endValue;

/// @brief Field getter, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_getter, put=__cordl_internal_set_getter)) ::DG::Tweening::Core::DOGetter_1<T1>*  getter;

/// @brief Field plugOptions, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_plugOptions, put=__cordl_internal_set_plugOptions)) TPlugOptions  plugOptions;

/// @brief Field setter, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_setter, put=__cordl_internal_set_setter)) ::DG::Tweening::Core::DOSetter_1<T1>*  setter;

/// @brief Field startValue, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_startValue, put=__cordl_internal_set_startValue)) T2  startValue;

/// @brief Field tweenPlugin, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_tweenPlugin, put=__cordl_internal_set_tweenPlugin)) ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>*  tweenPlugin;

/// @brief Method ApplyTween, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ApplyTween(float_t  prevPosition, int32_t  prevCompletedLoops, int32_t  newCompletedSteps, bool  useInversePosition, ::DG::Tweening::Core::Enums::UpdateMode  updateMode, ::DG::Tweening::Core::Enums::UpdateNotice  updateNotice) ;

/// @brief Method ChangeEndValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>* ChangeEndValue(T2  newEndValue, float_t  newDuration, bool  snapStartValue) ;

/// @brief Method ChangeEndValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>* ChangeEndValue(T2  newEndValue, bool  snapStartValue) ;

/// @brief Method ChangeEndValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::DG::Tweening::Tweener* ChangeEndValue(::System::Object*  newEndValue, float_t  newDuration, bool  snapStartValue) ;

/// @brief Method ChangeEndValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::DG::Tweening::Tweener* ChangeEndValue(::System::Object*  newEndValue, bool  snapStartValue) ;

/// @brief Method ChangeStartValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>* ChangeStartValue(T2  newStartValue, float_t  newDuration) ;

/// @brief Method ChangeStartValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::DG::Tweening::Tweener* ChangeStartValue(::System::Object*  newStartValue, float_t  newDuration) ;

/// @brief Method ChangeValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>* ChangeValues(T2  newStartValue, T2  newEndValue, float_t  newDuration) ;

/// @brief Method ChangeValues, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::DG::Tweening::Tweener* ChangeValues(::System::Object*  newStartValue, ::System::Object*  newEndValue, float_t  newDuration) ;

static inline ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>* New_ctor() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method SetFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::DG::Tweening::Tweener* SetFrom(T2  fromValue, bool  setImmediately) ;

/// @brief Method SetFrom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::DG::Tweening::Tweener* SetFrom(bool  relative) ;

/// @brief Method Startup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Startup() ;

/// @brief Method UpdateDelay, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t UpdateDelay(float_t  elapsed) ;

/// @brief Method Validate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Validate() ;

constexpr T2 const& __cordl_internal_get_changeValue() const;

constexpr T2& __cordl_internal_get_changeValue() ;

constexpr T2 const& __cordl_internal_get_endValue() const;

constexpr T2& __cordl_internal_get_endValue() ;

constexpr ::DG::Tweening::Core::DOGetter_1<T1>* const& __cordl_internal_get_getter() const;

constexpr ::DG::Tweening::Core::DOGetter_1<T1>*& __cordl_internal_get_getter() ;

constexpr TPlugOptions const& __cordl_internal_get_plugOptions() const;

constexpr TPlugOptions& __cordl_internal_get_plugOptions() ;

constexpr ::DG::Tweening::Core::DOSetter_1<T1>* const& __cordl_internal_get_setter() const;

constexpr ::DG::Tweening::Core::DOSetter_1<T1>*& __cordl_internal_get_setter() ;

constexpr T2 const& __cordl_internal_get_startValue() const;

constexpr T2& __cordl_internal_get_startValue() ;

constexpr ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>* const& __cordl_internal_get_tweenPlugin() const;

constexpr ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>*& __cordl_internal_get_tweenPlugin() ;

constexpr void __cordl_internal_set_changeValue(T2  value) ;

constexpr void __cordl_internal_set_endValue(T2  value) ;

constexpr void __cordl_internal_set_getter(::DG::Tweening::Core::DOGetter_1<T1>*  value) ;

constexpr void __cordl_internal_set_plugOptions(TPlugOptions  value) ;

constexpr void __cordl_internal_set_setter(::DG::Tweening::Core::DOSetter_1<T1>*  value) ;

constexpr void __cordl_internal_set_startValue(T2  value) ;

constexpr void __cordl_internal_set_tweenPlugin(::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TweenerCore_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TweenerCore_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TweenerCore_3(TweenerCore_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TweenerCore_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TweenerCore_3(TweenerCore_3 const& ) = delete;

/// @brief Field _TxtCantChangeSequencedValues offset 0xffffffff size 0x8
static constexpr ::ConstString  _TxtCantChangeSequencedValues{u"You cannot change the values of a tween contained inside a Sequence"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10856};

/// @brief Field startValue, offset: 0x128, size: 0x8, def value: None
 T2  ___startValue;

/// @brief Field endValue, offset: 0x130, size: 0x8, def value: None
 T2  ___endValue;

/// @brief Field changeValue, offset: 0x138, size: 0x8, def value: None
 T2  ___changeValue;

/// @brief Field plugOptions, offset: 0x140, size: 0x8, def value: None
 TPlugOptions  ___plugOptions;

/// @brief Field getter, offset: 0x148, size: 0x8, def value: None
 ::DG::Tweening::Core::DOGetter_1<T1>*  ___getter;

/// @brief Field setter, offset: 0x150, size: 0x8, def value: None
 ::DG::Tweening::Core::DOSetter_1<T1>*  ___setter;

/// @brief Field tweenPlugin, offset: 0x158, size: 0x8, def value: None
 ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>*  ___tweenPlugin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DG::Tweening::Core
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::DG::Tweening::Core::TweenerCore_3, "DG.Tweening.Core", "TweenerCore`3");
