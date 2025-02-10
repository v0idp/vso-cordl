#pragma once
// IWYU pragma private; include "DG/Tweening/Tweener.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/zzzz__Tween_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Tweener)
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
namespace DG::Tweening::Plugins::Core {
template<typename T1,typename T2,typename TPlugOptions>
class ABSTweenPlugin_3;
}
namespace System {
class Object;
}
// Forward declare root types
namespace DG::Tweening {
class Tweener;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Tweener);
// Dependencies DG.Tweening.Tween
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.Tweener
class CORDL_TYPE Tweener : public ::DG::Tweening::Tween {
public:
// Declarations
/// @brief Field hasManuallySetStartValue, offset 0x120, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasManuallySetStartValue, put=__cordl_internal_set_hasManuallySetStartValue)) bool  hasManuallySetStartValue;

/// @brief Field isFromAllowed, offset 0x121, size 0x1 
 __declspec(property(get=__cordl_internal_get_isFromAllowed, put=__cordl_internal_set_isFromAllowed)) bool  isFromAllowed;

/// @brief Method ChangeEndValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::DG::Tweening::Tweener* ChangeEndValue(::System::Object*  newEndValue, float_t  newDuration, bool  snapStartValue) ;

/// @brief Method ChangeEndValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::DG::Tweening::Tweener* ChangeEndValue(::System::Object*  newEndValue, bool  snapStartValue) ;

/// @brief Method ChangeStartValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::DG::Tweening::Tweener* ChangeStartValue(::System::Object*  newStartValue, float_t  newDuration) ;

/// @brief Method ChangeValues, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::DG::Tweening::Tweener* ChangeValues(::System::Object*  newStartValue, ::System::Object*  newEndValue, float_t  newDuration) ;

/// @brief Method DOStartupDurationBased, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename TPlugOptions>
static inline void DOStartupDurationBased(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t) ;

/// @brief Method DOStartupSpecials, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename TPlugOptions>
static inline bool DOStartupSpecials(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t) ;

/// @brief Method DoChangeEndValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename TPlugOptions>
static inline ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>* DoChangeEndValue(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t, T2  newEndValue, float_t  newDuration, bool  snapStartValue) ;

/// @brief Method DoChangeStartValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename TPlugOptions>
static inline ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>* DoChangeStartValue(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t, T2  newStartValue, float_t  newDuration) ;

/// @brief Method DoChangeValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename TPlugOptions>
static inline ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>* DoChangeValues(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t, T2  newStartValue, T2  newEndValue, float_t  newDuration) ;

/// @brief Method DoStartup, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename TPlugOptions>
static inline bool DoStartup(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t) ;

/// @brief Method DoUpdateDelay, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename TPlugOptions>
static inline float_t DoUpdateDelay(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t, float_t  elapsed) ;

static inline ::DG::Tweening::Tweener* New_ctor() ;

/// @brief Method SetFrom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::DG::Tweening::Tweener* SetFrom(bool  relative) ;

/// @brief Method Setup, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename TPlugOptions>
static inline bool Setup(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t, ::DG::Tweening::Core::DOGetter_1<T1>*  getter, ::DG::Tweening::Core::DOSetter_1<T1>*  setter, T2  endValue, float_t  duration, ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>*  plugin) ;

constexpr bool const& __cordl_internal_get_hasManuallySetStartValue() const;

constexpr bool& __cordl_internal_get_hasManuallySetStartValue() ;

constexpr bool const& __cordl_internal_get_isFromAllowed() const;

constexpr bool& __cordl_internal_get_isFromAllowed() ;

constexpr void __cordl_internal_set_hasManuallySetStartValue(bool  value) ;

constexpr void __cordl_internal_set_isFromAllowed(bool  value) ;

/// @brief Method .ctor, addr 0x18d6b18, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Tweener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Tweener", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tweener(Tweener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tweener", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tweener(Tweener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10786};

/// @brief Field hasManuallySetStartValue, offset: 0x120, size: 0x1, def value: None
 bool  ___hasManuallySetStartValue;

/// @brief Field isFromAllowed, offset: 0x121, size: 0x1, def value: None
 bool  ___isFromAllowed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Tweener, ___hasManuallySetStartValue) == 0x120, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tweener, ___isFromAllowed) == 0x121, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Tweener, 0x128>, "Size mismatch!");

} // namespace end def DG::Tweening
NEED_NO_BOX(::DG::Tweening::Tweener);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Tweener*, "DG.Tweening", "Tweener");
