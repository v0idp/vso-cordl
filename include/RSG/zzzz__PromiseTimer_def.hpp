#pragma once
// IWYU pragma private; include "RSG/PromiseTimer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RSG/zzzz__IPromiseTimer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PromiseTimer)
namespace RSG {
class IPromise;
}
namespace RSG {
class PredicateWait;
}
namespace RSG {
class PromiseTimer___c__DisplayClass3_0;
}
namespace RSG {
class PromiseTimer___c__DisplayClass4_0;
}
namespace RSG {
struct TimeData;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace RSG {
class PromiseTimer;
}
namespace RSG {
class PromiseTimer___c__DisplayClass3_0;
}
namespace RSG {
class PromiseTimer___c__DisplayClass4_0;
}
// Write type traits
MARK_REF_PTR_T(::RSG::PromiseTimer);
MARK_REF_PTR_T(::RSG::PromiseTimer___c__DisplayClass3_0);
MARK_REF_PTR_T(::RSG::PromiseTimer___c__DisplayClass4_0);
// Dependencies System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.PromiseTimer/<>c__DisplayClass3_0
class CORDL_TYPE PromiseTimer___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field seconds, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_seconds, put=__cordl_internal_set_seconds)) float_t  seconds;

static inline ::RSG::PromiseTimer___c__DisplayClass3_0* New_ctor() ;

/// @brief Method <WaitFor>b__0, addr 0x17f3974, size 0x14, virtual false, abstract: false, final false
inline bool _WaitFor_b__0(::RSG::TimeData  t) ;

constexpr float_t const& __cordl_internal_get_seconds() const;

constexpr float_t& __cordl_internal_get_seconds() ;

constexpr void __cordl_internal_set_seconds(float_t  value) ;

/// @brief Method .ctor, addr 0x17f3078, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PromiseTimer___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PromiseTimer___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PromiseTimer___c__DisplayClass3_0(PromiseTimer___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PromiseTimer___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PromiseTimer___c__DisplayClass3_0(PromiseTimer___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1692};

/// @brief Field seconds, offset: 0x10, size: 0x4, def value: None
 float_t  ___seconds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::RSG::PromiseTimer___c__DisplayClass3_0, ___seconds) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::PromiseTimer___c__DisplayClass3_0, 0x18>, "Size mismatch!");

} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.PromiseTimer/<>c__DisplayClass4_0
class CORDL_TYPE PromiseTimer___c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief Field predicate, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_predicate, put=__cordl_internal_set_predicate)) ::System::Func_2<::RSG::TimeData,bool>*  predicate;

static inline ::RSG::PromiseTimer___c__DisplayClass4_0* New_ctor() ;

/// @brief Method <WaitWhile>b__0, addr 0x17f3988, size 0x34, virtual false, abstract: false, final false
inline bool _WaitWhile_b__0(::RSG::TimeData  t) ;

constexpr ::System::Func_2<::RSG::TimeData,bool>* const& __cordl_internal_get_predicate() const;

constexpr ::System::Func_2<::RSG::TimeData,bool>*& __cordl_internal_get_predicate() ;

constexpr void __cordl_internal_set_predicate(::System::Func_2<::RSG::TimeData,bool>*  value) ;

/// @brief Method .ctor, addr 0x17f320c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PromiseTimer___c__DisplayClass4_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PromiseTimer___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PromiseTimer___c__DisplayClass4_0(PromiseTimer___c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PromiseTimer___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PromiseTimer___c__DisplayClass4_0(PromiseTimer___c__DisplayClass4_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1693};

/// @brief Field predicate, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<::RSG::TimeData,bool>*  ___predicate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::RSG::PromiseTimer___c__DisplayClass4_0, ___predicate) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::PromiseTimer___c__DisplayClass4_0, 0x18>, "Size mismatch!");

} // namespace end def RSG
// Dependencies RSG.IPromiseTimer, System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.PromiseTimer
class CORDL_TYPE PromiseTimer : public ::System::Object {
public:
// Declarations
using __c__DisplayClass3_0 = ::RSG::PromiseTimer___c__DisplayClass3_0;

using __c__DisplayClass4_0 = ::RSG::PromiseTimer___c__DisplayClass4_0;

/// @brief Field curFrame, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_curFrame, put=__cordl_internal_set_curFrame)) int32_t  curFrame;

/// @brief Field curTime, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_curTime, put=__cordl_internal_set_curTime)) float_t  curTime;

/// @brief Field waiting, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_waiting, put=__cordl_internal_set_waiting)) ::System::Collections::Generic::LinkedList_1<::RSG::PredicateWait*>*  waiting;

/// @brief Convert operator to "::RSG::IPromiseTimer"
constexpr operator  ::RSG::IPromiseTimer*() noexcept;

/// @brief Method Cancel, addr 0x17f32d4, size 0x148, virtual true, abstract: false, final true
inline bool Cancel(::RSG::IPromise*  promise) ;

/// @brief Method FindInWaiting, addr 0x17f341c, size 0x1a0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::LinkedListNode_1<::RSG::PredicateWait*>* FindInWaiting(::RSG::IPromise*  promise) ;

static inline ::RSG::PromiseTimer* New_ctor() ;

/// @brief Method RemoveNode, addr 0x17f386c, size 0x8c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::LinkedListNode_1<::RSG::PredicateWait*>* RemoveNode(::System::Collections::Generic::LinkedListNode_1<::RSG::PredicateWait*>*  node) ;

/// @brief Method Update, addr 0x17f35bc, size 0x2b0, virtual true, abstract: false, final true
inline void Update(float_t  deltaTime) ;

/// @brief Method WaitFor, addr 0x17f2fc0, size 0xb8, virtual true, abstract: false, final true
inline ::RSG::IPromise* WaitFor(float_t  seconds) ;

/// @brief Method WaitUntil, addr 0x17f3080, size 0xd4, virtual true, abstract: false, final true
inline ::RSG::IPromise* WaitUntil(::System::Func_2<::RSG::TimeData,bool>*  predicate) ;

/// @brief Method WaitWhile, addr 0x17f3154, size 0xb8, virtual true, abstract: false, final true
inline ::RSG::IPromise* WaitWhile(::System::Func_2<::RSG::TimeData,bool>*  predicate) ;

constexpr int32_t const& __cordl_internal_get_curFrame() const;

constexpr int32_t& __cordl_internal_get_curFrame() ;

constexpr float_t const& __cordl_internal_get_curTime() const;

constexpr float_t& __cordl_internal_get_curTime() ;

constexpr ::System::Collections::Generic::LinkedList_1<::RSG::PredicateWait*>* const& __cordl_internal_get_waiting() const;

constexpr ::System::Collections::Generic::LinkedList_1<::RSG::PredicateWait*>*& __cordl_internal_get_waiting() ;

constexpr void __cordl_internal_set_curFrame(int32_t  value) ;

constexpr void __cordl_internal_set_curTime(float_t  value) ;

constexpr void __cordl_internal_set_waiting(::System::Collections::Generic::LinkedList_1<::RSG::PredicateWait*>*  value) ;

/// @brief Method .ctor, addr 0x17f38f8, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::RSG::IPromiseTimer"
constexpr ::RSG::IPromiseTimer* i___RSG__IPromiseTimer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PromiseTimer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PromiseTimer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PromiseTimer(PromiseTimer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PromiseTimer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PromiseTimer(PromiseTimer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1694};

/// @brief Field curTime, offset: 0x10, size: 0x4, def value: None
 float_t  ___curTime;

/// @brief Field curFrame, offset: 0x14, size: 0x4, def value: None
 int32_t  ___curFrame;

/// @brief Field waiting, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::LinkedList_1<::RSG::PredicateWait*>*  ___waiting;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::RSG::PromiseTimer, ___curTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RSG::PromiseTimer, ___curFrame) == 0x14, "Offset mismatch!");

static_assert(offsetof(::RSG::PromiseTimer, ___waiting) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::PromiseTimer, 0x20>, "Size mismatch!");

} // namespace end def RSG
NEED_NO_BOX(::RSG::PromiseTimer);
DEFINE_IL2CPP_ARG_TYPE(::RSG::PromiseTimer*, "RSG", "PromiseTimer");
NEED_NO_BOX(::RSG::PromiseTimer___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::PromiseTimer___c__DisplayClass3_0*, "RSG", "PromiseTimer/<>c__DisplayClass3_0");
NEED_NO_BOX(::RSG::PromiseTimer___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::PromiseTimer___c__DisplayClass4_0*, "RSG", "PromiseTimer/<>c__DisplayClass4_0");
