#pragma once
// IWYU pragma private; include "RSG/Promise.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RSG/zzzz__IPendingPromise_def.hpp"
#include "RSG/zzzz__IPromiseInfo_def.hpp"
#include "RSG/zzzz__IPromise_def.hpp"
#include "RSG/zzzz__IRejectable_def.hpp"
#include "RSG/zzzz__PromiseState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Promise)
namespace RSG {
class ExceptionEventArgs;
}
namespace RSG {
class IPromiseInfo;
}
namespace RSG {
template<typename PromisedT>
class IPromise_1;
}
namespace RSG {
class IPromise;
}
namespace RSG {
class IRejectable;
}
namespace RSG {
struct ProgressHandler;
}
namespace RSG {
struct PromiseState;
}
namespace RSG {
template<typename PromisedT>
class Promise_1;
}
namespace RSG {
struct Promise_ResolveHandler;
}
namespace RSG {
class Promise___c__DisplayClass34_0;
}
namespace RSG {
class Promise___c__DisplayClass36_0;
}
namespace RSG {
class Promise___c__DisplayClass44_0;
}
namespace RSG {
template<typename ConvertedT>
class Promise___c__DisplayClass51_0_1;
}
namespace RSG {
class Promise___c__DisplayClass52_0;
}
namespace RSG {
class Promise___c__DisplayClass53_0;
}
namespace RSG {
class Promise___c__DisplayClass56_0;
}
namespace RSG {
template<typename ConvertedT>
class Promise___c__DisplayClass57_0_1;
}
namespace RSG {
class Promise___c__DisplayClass59_0;
}
namespace RSG {
class Promise___c__DisplayClass59_1;
}
namespace RSG {
class Promise___c__DisplayClass60_0;
}
namespace RSG {
class Promise___c__DisplayClass62_0;
}
namespace RSG {
class Promise___c__DisplayClass62_1;
}
namespace RSG {
class Promise___c__DisplayClass63_0;
}
namespace RSG {
template<typename ConvertedT>
class Promise___c__DisplayClass64_0_1;
}
namespace RSG {
class Promise___c__DisplayClass66_0;
}
namespace RSG {
class Promise___c__DisplayClass66_1;
}
namespace RSG {
class Promise___c__DisplayClass69_0;
}
namespace RSG {
class Promise___c__DisplayClass70_0;
}
namespace RSG {
template<typename ConvertedT>
class Promise___c__DisplayClass71_0_1;
}
namespace RSG {
struct RejectHandler;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System {
class Exception;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace RSG {
class Promise;
}
namespace RSG {
class Promise___c__DisplayClass34_0;
}
namespace RSG {
class Promise___c__DisplayClass36_0;
}
namespace RSG {
class Promise___c__DisplayClass44_0;
}
namespace RSG {
template<typename ConvertedT>
class Promise___c__DisplayClass51_0_1;
}
namespace RSG {
class Promise___c__DisplayClass52_0;
}
namespace RSG {
class Promise___c__DisplayClass53_0;
}
namespace RSG {
class Promise___c__DisplayClass56_0;
}
namespace RSG {
template<typename ConvertedT>
class Promise___c__DisplayClass57_0_1;
}
namespace RSG {
class Promise___c__DisplayClass59_0;
}
namespace RSG {
class Promise___c__DisplayClass59_1;
}
namespace RSG {
class Promise___c__DisplayClass60_0;
}
namespace RSG {
class Promise___c__DisplayClass62_0;
}
namespace RSG {
class Promise___c__DisplayClass62_1;
}
namespace RSG {
class Promise___c__DisplayClass63_0;
}
namespace RSG {
template<typename ConvertedT>
class Promise___c__DisplayClass64_0_1;
}
namespace RSG {
class Promise___c__DisplayClass66_0;
}
namespace RSG {
class Promise___c__DisplayClass66_1;
}
namespace RSG {
class Promise___c__DisplayClass69_0;
}
namespace RSG {
class Promise___c__DisplayClass70_0;
}
namespace RSG {
template<typename ConvertedT>
class Promise___c__DisplayClass71_0_1;
}
namespace RSG {
struct Promise_ResolveHandler;
}
// Write type traits
MARK_REF_PTR_T(::RSG::Promise);
MARK_REF_PTR_T(::RSG::Promise___c__DisplayClass34_0);
MARK_REF_PTR_T(::RSG::Promise___c__DisplayClass36_0);
MARK_REF_PTR_T(::RSG::Promise___c__DisplayClass44_0);
MARK_GEN_REF_PTR_T(::RSG::Promise___c__DisplayClass51_0_1);
MARK_REF_PTR_T(::RSG::Promise___c__DisplayClass52_0);
MARK_REF_PTR_T(::RSG::Promise___c__DisplayClass53_0);
MARK_REF_PTR_T(::RSG::Promise___c__DisplayClass56_0);
MARK_GEN_REF_PTR_T(::RSG::Promise___c__DisplayClass57_0_1);
MARK_REF_PTR_T(::RSG::Promise___c__DisplayClass59_0);
MARK_REF_PTR_T(::RSG::Promise___c__DisplayClass59_1);
MARK_REF_PTR_T(::RSG::Promise___c__DisplayClass60_0);
MARK_REF_PTR_T(::RSG::Promise___c__DisplayClass62_0);
MARK_REF_PTR_T(::RSG::Promise___c__DisplayClass62_1);
MARK_REF_PTR_T(::RSG::Promise___c__DisplayClass63_0);
MARK_GEN_REF_PTR_T(::RSG::Promise___c__DisplayClass64_0_1);
MARK_REF_PTR_T(::RSG::Promise___c__DisplayClass66_0);
MARK_REF_PTR_T(::RSG::Promise___c__DisplayClass66_1);
MARK_REF_PTR_T(::RSG::Promise___c__DisplayClass69_0);
MARK_REF_PTR_T(::RSG::Promise___c__DisplayClass70_0);
MARK_GEN_REF_PTR_T(::RSG::Promise___c__DisplayClass71_0_1);
MARK_VAL_T(::RSG::Promise_ResolveHandler);
// Dependencies 
namespace RSG {
// Is value type: true
// CS Name: RSG.Promise/ResolveHandler
struct CORDL_TYPE Promise_ResolveHandler {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Promise_ResolveHandler() ;

// Ctor Parameters [CppParam { name: "callback", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "rejectable", ty: "::RSG::IRejectable*", modifiers: "", def_value: None }]
constexpr Promise_ResolveHandler(::System::Action*  callback, ::RSG::IRejectable*  rejectable) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1701};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field callback, offset: 0x0, size: 0x8, def value: None
 ::System::Action*  callback;

/// @brief Field rejectable, offset: 0x8, size: 0x8, def value: None
 ::RSG::IRejectable*  rejectable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::RSG::Promise_ResolveHandler, callback) == 0x0, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise_ResolveHandler, rejectable) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::Promise_ResolveHandler, 0x10>, "Size mismatch!");

} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.Promise/<>c__DisplayClass34_0
class CORDL_TYPE Promise___c__DisplayClass34_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::RSG::Promise*  __4__this;

/// @brief Field ex, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ex, put=__cordl_internal_set_ex)) ::System::Exception*  ex;

static inline ::RSG::Promise___c__DisplayClass34_0* New_ctor() ;

/// @brief Method <InvokeRejectHandlers>b__0, addr 0x17f62c8, size 0x24, virtual false, abstract: false, final false
inline void _InvokeRejectHandlers_b__0(::RSG::RejectHandler  handler) ;

constexpr ::RSG::Promise* const& __cordl_internal_get___4__this() const;

constexpr ::RSG::Promise*& __cordl_internal_get___4__this() ;

constexpr ::System::Exception* const& __cordl_internal_get_ex() const;

constexpr ::System::Exception*& __cordl_internal_get_ex() ;

constexpr void __cordl_internal_set___4__this(::RSG::Promise*  value) ;

constexpr void __cordl_internal_set_ex(::System::Exception*  value) ;

/// @brief Method .ctor, addr 0x17f62c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise___c__DisplayClass34_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass34_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise___c__DisplayClass34_0(Promise___c__DisplayClass34_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass34_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise___c__DisplayClass34_0(Promise___c__DisplayClass34_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1702};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::RSG::Promise*  _____4__this;

/// @brief Field ex, offset: 0x18, size: 0x8, def value: None
 ::System::Exception*  ___ex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::RSG::Promise___c__DisplayClass34_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise___c__DisplayClass34_0, ___ex) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::Promise___c__DisplayClass34_0, 0x20>, "Size mismatch!");

} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.Promise/<>c__DisplayClass36_0
class CORDL_TYPE Promise___c__DisplayClass36_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::RSG::Promise*  __4__this;

/// @brief Field progress, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) float_t  progress;

static inline ::RSG::Promise___c__DisplayClass36_0* New_ctor() ;

/// @brief Method <InvokeProgressHandlers>b__0, addr 0x17f62f4, size 0x24, virtual false, abstract: false, final false
inline void _InvokeProgressHandlers_b__0(::RSG::ProgressHandler  handler) ;

constexpr ::RSG::Promise* const& __cordl_internal_get___4__this() const;

constexpr ::RSG::Promise*& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get_progress() const;

constexpr float_t& __cordl_internal_get_progress() ;

constexpr void __cordl_internal_set___4__this(::RSG::Promise*  value) ;

constexpr void __cordl_internal_set_progress(float_t  value) ;

/// @brief Method .ctor, addr 0x17f62ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise___c__DisplayClass36_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass36_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise___c__DisplayClass36_0(Promise___c__DisplayClass36_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass36_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise___c__DisplayClass36_0(Promise___c__DisplayClass36_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1703};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::RSG::Promise*  _____4__this;

/// @brief Field progress, offset: 0x18, size: 0x4, def value: None
 float_t  ___progress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::RSG::Promise___c__DisplayClass36_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise___c__DisplayClass36_0, ___progress) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::Promise___c__DisplayClass36_0, 0x20>, "Size mismatch!");

} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.Promise/<>c__DisplayClass44_0
class CORDL_TYPE Promise___c__DisplayClass44_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onRejected, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRejected, put=__cordl_internal_set_onRejected)) ::System::Action_1<::System::Exception*>*  onRejected;

/// @brief Field resultPromise, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultPromise, put=__cordl_internal_set_resultPromise)) ::RSG::Promise*  resultPromise;

static inline ::RSG::Promise___c__DisplayClass44_0* New_ctor() ;

/// @brief Method <Catch>b__0, addr 0x17f6320, size 0x1c, virtual false, abstract: false, final false
inline void _Catch_b__0() ;

/// @brief Method <Catch>b__1, addr 0x17f633c, size 0xdc, virtual false, abstract: false, final false
inline void _Catch_b__1(::System::Exception*  ex) ;

/// @brief Method <Catch>b__2, addr 0x17f6418, size 0x1c, virtual false, abstract: false, final false
inline void _Catch_b__2(float_t  v) ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get_onRejected() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get_onRejected() ;

constexpr ::RSG::Promise* const& __cordl_internal_get_resultPromise() const;

constexpr ::RSG::Promise*& __cordl_internal_get_resultPromise() ;

constexpr void __cordl_internal_set_onRejected(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_resultPromise(::RSG::Promise*  value) ;

/// @brief Method .ctor, addr 0x17f6318, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise___c__DisplayClass44_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass44_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise___c__DisplayClass44_0(Promise___c__DisplayClass44_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass44_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise___c__DisplayClass44_0(Promise___c__DisplayClass44_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1704};

/// @brief Field resultPromise, offset: 0x10, size: 0x8, def value: None
 ::RSG::Promise*  ___resultPromise;

/// @brief Field onRejected, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  ___onRejected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::RSG::Promise___c__DisplayClass44_0, ___resultPromise) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise___c__DisplayClass44_0, ___onRejected) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::Promise___c__DisplayClass44_0, 0x20>, "Size mismatch!");

} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename ConvertedT>
// Is value type: false
// CS Name: RSG.Promise/<>c__DisplayClass51_0`1<ConvertedT>
class CORDL_TYPE Promise___c__DisplayClass51_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__2, put=__cordl_internal_set___9__2)) ::System::Action_1<float_t>*  __9__2;

/// @brief Field <>9__3, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__3, put=__cordl_internal_set___9__3)) ::System::Action_1<ConvertedT>*  __9__3;

/// @brief Field <>9__4, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__4, put=__cordl_internal_set___9__4)) ::System::Action_1<::System::Exception*>*  __9__4;

/// @brief Field <>9__5, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__5, put=__cordl_internal_set___9__5)) ::System::Action_1<ConvertedT>*  __9__5;

/// @brief Field <>9__6, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__6, put=__cordl_internal_set___9__6)) ::System::Action_1<::System::Exception*>*  __9__6;

/// @brief Field onRejected, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRejected, put=__cordl_internal_set_onRejected)) ::System::Func_2<::System::Exception*,::RSG::IPromise_1<ConvertedT>*>*  onRejected;

/// @brief Field onResolved, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onResolved, put=__cordl_internal_set_onResolved)) ::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*  onResolved;

/// @brief Field resultPromise, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultPromise, put=__cordl_internal_set_resultPromise)) ::RSG::Promise_1<ConvertedT>*  resultPromise;

static inline ::RSG::Promise___c__DisplayClass51_0_1<ConvertedT>* New_ctor() ;

/// @brief Method <Then>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Then_b__0() ;

/// @brief Method <Then>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Then_b__1(::System::Exception*  ex) ;

/// @brief Method <Then>b__2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Then_b__2(float_t  progress) ;

/// @brief Method <Then>b__3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Then_b__3(ConvertedT  chainedValue) ;

/// @brief Method <Then>b__4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Then_b__4(::System::Exception*  ex) ;

/// @brief Method <Then>b__5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Then_b__5(ConvertedT  chainedValue) ;

/// @brief Method <Then>b__6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Then_b__6(::System::Exception*  callbackEx) ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get___9__2() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get___9__2() ;

constexpr ::System::Action_1<ConvertedT>* const& __cordl_internal_get___9__3() const;

constexpr ::System::Action_1<ConvertedT>*& __cordl_internal_get___9__3() ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get___9__4() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get___9__4() ;

constexpr ::System::Action_1<ConvertedT>* const& __cordl_internal_get___9__5() const;

constexpr ::System::Action_1<ConvertedT>*& __cordl_internal_get___9__5() ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get___9__6() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get___9__6() ;

constexpr ::System::Func_2<::System::Exception*,::RSG::IPromise_1<ConvertedT>*>* const& __cordl_internal_get_onRejected() const;

constexpr ::System::Func_2<::System::Exception*,::RSG::IPromise_1<ConvertedT>*>*& __cordl_internal_get_onRejected() ;

constexpr ::System::Func_1<::RSG::IPromise_1<ConvertedT>*>* const& __cordl_internal_get_onResolved() const;

constexpr ::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*& __cordl_internal_get_onResolved() ;

constexpr ::RSG::Promise_1<ConvertedT>* const& __cordl_internal_get_resultPromise() const;

constexpr ::RSG::Promise_1<ConvertedT>*& __cordl_internal_get_resultPromise() ;

constexpr void __cordl_internal_set___9__2(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set___9__3(::System::Action_1<ConvertedT>*  value) ;

constexpr void __cordl_internal_set___9__4(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set___9__5(::System::Action_1<ConvertedT>*  value) ;

constexpr void __cordl_internal_set___9__6(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_onRejected(::System::Func_2<::System::Exception*,::RSG::IPromise_1<ConvertedT>*>*  value) ;

constexpr void __cordl_internal_set_onResolved(::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*  value) ;

constexpr void __cordl_internal_set_resultPromise(::RSG::Promise_1<ConvertedT>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise___c__DisplayClass51_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass51_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise___c__DisplayClass51_0_1(Promise___c__DisplayClass51_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass51_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise___c__DisplayClass51_0_1(Promise___c__DisplayClass51_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1705};

/// @brief Field onResolved, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*  ___onResolved;

/// @brief Field resultPromise, offset: 0x18, size: 0x8, def value: None
 ::RSG::Promise_1<ConvertedT>*  ___resultPromise;

/// @brief Field onRejected, offset: 0x20, size: 0x8, def value: None
 ::System::Func_2<::System::Exception*,::RSG::IPromise_1<ConvertedT>*>*  ___onRejected;

/// @brief Field <>9__2, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<float_t>*  _____9__2;

/// @brief Field <>9__3, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<ConvertedT>*  _____9__3;

/// @brief Field <>9__4, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  _____9__4;

/// @brief Field <>9__5, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<ConvertedT>*  _____9__5;

/// @brief Field <>9__6, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  _____9__6;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.Promise/<>c__DisplayClass52_0
class CORDL_TYPE Promise___c__DisplayClass52_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__2, put=__cordl_internal_set___9__2)) ::System::Action_1<float_t>*  __9__2;

/// @brief Field <>9__3, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__3, put=__cordl_internal_set___9__3)) ::System::Action*  __9__3;

/// @brief Field <>9__4, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__4, put=__cordl_internal_set___9__4)) ::System::Action_1<::System::Exception*>*  __9__4;

/// @brief Field onRejected, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRejected, put=__cordl_internal_set_onRejected)) ::System::Action_1<::System::Exception*>*  onRejected;

/// @brief Field onResolved, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onResolved, put=__cordl_internal_set_onResolved)) ::System::Func_1<::RSG::IPromise*>*  onResolved;

/// @brief Field resultPromise, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultPromise, put=__cordl_internal_set_resultPromise)) ::RSG::Promise*  resultPromise;

static inline ::RSG::Promise___c__DisplayClass52_0* New_ctor() ;

/// @brief Method <Then>b__0, addr 0x17f643c, size 0x240, virtual false, abstract: false, final false
inline void _Then_b__0() ;

/// @brief Method <Then>b__1, addr 0x17f66d0, size 0x4c, virtual false, abstract: false, final false
inline void _Then_b__1(::System::Exception*  ex) ;

/// @brief Method <Then>b__2, addr 0x17f667c, size 0x1c, virtual false, abstract: false, final false
inline void _Then_b__2(float_t  progress) ;

/// @brief Method <Then>b__3, addr 0x17f6698, size 0x1c, virtual false, abstract: false, final false
inline void _Then_b__3() ;

/// @brief Method <Then>b__4, addr 0x17f66b4, size 0x1c, virtual false, abstract: false, final false
inline void _Then_b__4(::System::Exception*  ex) ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get___9__2() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get___9__2() ;

constexpr ::System::Action* const& __cordl_internal_get___9__3() const;

constexpr ::System::Action*& __cordl_internal_get___9__3() ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get___9__4() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get___9__4() ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get_onRejected() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get_onRejected() ;

constexpr ::System::Func_1<::RSG::IPromise*>* const& __cordl_internal_get_onResolved() const;

constexpr ::System::Func_1<::RSG::IPromise*>*& __cordl_internal_get_onResolved() ;

constexpr ::RSG::Promise* const& __cordl_internal_get_resultPromise() const;

constexpr ::RSG::Promise*& __cordl_internal_get_resultPromise() ;

constexpr void __cordl_internal_set___9__2(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set___9__3(::System::Action*  value) ;

constexpr void __cordl_internal_set___9__4(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_onRejected(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_onResolved(::System::Func_1<::RSG::IPromise*>*  value) ;

constexpr void __cordl_internal_set_resultPromise(::RSG::Promise*  value) ;

/// @brief Method .ctor, addr 0x17f6434, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise___c__DisplayClass52_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass52_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise___c__DisplayClass52_0(Promise___c__DisplayClass52_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass52_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise___c__DisplayClass52_0(Promise___c__DisplayClass52_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1706};

/// @brief Field onResolved, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<::RSG::IPromise*>*  ___onResolved;

/// @brief Field resultPromise, offset: 0x18, size: 0x8, def value: None
 ::RSG::Promise*  ___resultPromise;

/// @brief Field onRejected, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  ___onRejected;

/// @brief Field <>9__2, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<float_t>*  _____9__2;

/// @brief Field <>9__3, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  _____9__3;

/// @brief Field <>9__4, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  _____9__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::RSG::Promise___c__DisplayClass52_0, ___onResolved) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise___c__DisplayClass52_0, ___resultPromise) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise___c__DisplayClass52_0, ___onRejected) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise___c__DisplayClass52_0, _____9__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise___c__DisplayClass52_0, _____9__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise___c__DisplayClass52_0, _____9__4) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::Promise___c__DisplayClass52_0, 0x40>, "Size mismatch!");

} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.Promise/<>c__DisplayClass53_0
class CORDL_TYPE Promise___c__DisplayClass53_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onRejected, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRejected, put=__cordl_internal_set_onRejected)) ::System::Action_1<::System::Exception*>*  onRejected;

/// @brief Field onResolved, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onResolved, put=__cordl_internal_set_onResolved)) ::System::Action*  onResolved;

/// @brief Field resultPromise, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultPromise, put=__cordl_internal_set_resultPromise)) ::RSG::Promise*  resultPromise;

static inline ::RSG::Promise___c__DisplayClass53_0* New_ctor() ;

/// @brief Method <Then>b__0, addr 0x17f6724, size 0x38, virtual false, abstract: false, final false
inline void _Then_b__0() ;

/// @brief Method <Then>b__1, addr 0x17f675c, size 0x4c, virtual false, abstract: false, final false
inline void _Then_b__1(::System::Exception*  ex) ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get_onRejected() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get_onRejected() ;

constexpr ::System::Action* const& __cordl_internal_get_onResolved() const;

constexpr ::System::Action*& __cordl_internal_get_onResolved() ;

constexpr ::RSG::Promise* const& __cordl_internal_get_resultPromise() const;

constexpr ::RSG::Promise*& __cordl_internal_get_resultPromise() ;

constexpr void __cordl_internal_set_onRejected(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_onResolved(::System::Action*  value) ;

constexpr void __cordl_internal_set_resultPromise(::RSG::Promise*  value) ;

/// @brief Method .ctor, addr 0x17f671c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise___c__DisplayClass53_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass53_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise___c__DisplayClass53_0(Promise___c__DisplayClass53_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass53_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise___c__DisplayClass53_0(Promise___c__DisplayClass53_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1707};

/// @brief Field onResolved, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___onResolved;

/// @brief Field resultPromise, offset: 0x18, size: 0x8, def value: None
 ::RSG::Promise*  ___resultPromise;

/// @brief Field onRejected, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  ___onRejected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::RSG::Promise___c__DisplayClass53_0, ___onResolved) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise___c__DisplayClass53_0, ___resultPromise) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise___c__DisplayClass53_0, ___onRejected) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::Promise___c__DisplayClass53_0, 0x28>, "Size mismatch!");

} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.Promise/<>c__DisplayClass56_0
class CORDL_TYPE Promise___c__DisplayClass56_0 : public ::System::Object {
public:
// Declarations
/// @brief Field chain, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_chain, put=__cordl_internal_set_chain)) ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  chain;

static inline ::RSG::Promise___c__DisplayClass56_0* New_ctor() ;

/// @brief Method <ThenAll>b__0, addr 0x17f67b0, size 0x7c, virtual false, abstract: false, final false
inline ::RSG::IPromise* _ThenAll_b__0() ;

constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>* const& __cordl_internal_get_chain() const;

constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*& __cordl_internal_get_chain() ;

constexpr void __cordl_internal_set_chain(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  value) ;

/// @brief Method .ctor, addr 0x17f67a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise___c__DisplayClass56_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass56_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise___c__DisplayClass56_0(Promise___c__DisplayClass56_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass56_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise___c__DisplayClass56_0(Promise___c__DisplayClass56_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1708};

/// @brief Field chain, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  ___chain;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::RSG::Promise___c__DisplayClass56_0, ___chain) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::Promise___c__DisplayClass56_0, 0x18>, "Size mismatch!");

} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename ConvertedT>
// Is value type: false
// CS Name: RSG.Promise/<>c__DisplayClass57_0`1<ConvertedT>
class CORDL_TYPE Promise___c__DisplayClass57_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field chain, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_chain, put=__cordl_internal_set_chain)) ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  chain;

static inline ::RSG::Promise___c__DisplayClass57_0_1<ConvertedT>* New_ctor() ;

/// @brief Method <ThenAll>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::RSG::IPromise_1<::System::Collections::Generic::IEnumerable_1<ConvertedT>*>* _ThenAll_b__0() ;

constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>* const& __cordl_internal_get_chain() const;

constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*& __cordl_internal_get_chain() ;

constexpr void __cordl_internal_set_chain(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise___c__DisplayClass57_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass57_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise___c__DisplayClass57_0_1(Promise___c__DisplayClass57_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass57_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise___c__DisplayClass57_0_1(Promise___c__DisplayClass57_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1709};

/// @brief Field chain, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  ___chain;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.Promise/<>c__DisplayClass59_0
class CORDL_TYPE Promise___c__DisplayClass59_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__3, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__3, put=__cordl_internal_set___9__3)) ::System::Action_1<::System::Exception*>*  __9__3;

/// @brief Field progress, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) ::ArrayW<float_t,::Array<float_t>*>  progress;

/// @brief Field remainingCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_remainingCount, put=__cordl_internal_set_remainingCount)) int32_t  remainingCount;

/// @brief Field resultPromise, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultPromise, put=__cordl_internal_set_resultPromise)) ::RSG::Promise*  resultPromise;

static inline ::RSG::Promise___c__DisplayClass59_0* New_ctor() ;

/// @brief Method <All>b__0, addr 0x17f6834, size 0x300, virtual false, abstract: false, final false
inline void _All_b__0(::RSG::IPromise*  promise, int32_t  index) ;

/// @brief Method <All>b__3, addr 0x17f6b3c, size 0x2c, virtual false, abstract: false, final false
inline void _All_b__3(::System::Exception*  ex) ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get___9__3() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get___9__3() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_progress() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_progress() ;

constexpr int32_t const& __cordl_internal_get_remainingCount() const;

constexpr int32_t& __cordl_internal_get_remainingCount() ;

constexpr ::RSG::Promise* const& __cordl_internal_get_resultPromise() const;

constexpr ::RSG::Promise*& __cordl_internal_get_resultPromise() ;

constexpr void __cordl_internal_set___9__3(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_progress(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set_remainingCount(int32_t  value) ;

constexpr void __cordl_internal_set_resultPromise(::RSG::Promise*  value) ;

/// @brief Method .ctor, addr 0x17f682c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise___c__DisplayClass59_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass59_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise___c__DisplayClass59_0(Promise___c__DisplayClass59_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass59_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise___c__DisplayClass59_0(Promise___c__DisplayClass59_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1710};

/// @brief Field progress, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___progress;

/// @brief Field resultPromise, offset: 0x18, size: 0x8, def value: None
 ::RSG::Promise*  ___resultPromise;

/// @brief Field remainingCount, offset: 0x20, size: 0x4, def value: None
 int32_t  ___remainingCount;

/// @brief Field <>9__3, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  _____9__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::RSG::Promise___c__DisplayClass59_0, ___progress) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise___c__DisplayClass59_0, ___resultPromise) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise___c__DisplayClass59_0, ___remainingCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise___c__DisplayClass59_0, _____9__3) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::Promise___c__DisplayClass59_0, 0x30>, "Size mismatch!");

} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.Promise/<>c__DisplayClass59_1
class CORDL_TYPE Promise___c__DisplayClass59_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::RSG::Promise___c__DisplayClass59_0*  CS$__8__locals1;

/// @brief Field index, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

static inline ::RSG::Promise___c__DisplayClass59_1* New_ctor() ;

/// @brief Method <All>b__1, addr 0x17f6b68, size 0x68, virtual false, abstract: false, final false
inline void _All_b__1(float_t  v) ;

/// @brief Method <All>b__2, addr 0x17f6bd0, size 0x70, virtual false, abstract: false, final false
inline void _All_b__2() ;

constexpr ::RSG::Promise___c__DisplayClass59_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::RSG::Promise___c__DisplayClass59_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::RSG::Promise___c__DisplayClass59_0*  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

/// @brief Method .ctor, addr 0x17f6b34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise___c__DisplayClass59_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass59_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise___c__DisplayClass59_1(Promise___c__DisplayClass59_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass59_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise___c__DisplayClass59_1(Promise___c__DisplayClass59_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1711};

/// @brief Field index, offset: 0x10, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::RSG::Promise___c__DisplayClass59_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::RSG::Promise___c__DisplayClass59_1, ___index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise___c__DisplayClass59_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::Promise___c__DisplayClass59_1, 0x20>, "Size mismatch!");

} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.Promise/<>c__DisplayClass60_0
class CORDL_TYPE Promise___c__DisplayClass60_0 : public ::System::Object {
public:
// Declarations
/// @brief Field chain, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_chain, put=__cordl_internal_set_chain)) ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RSG::IPromise*>*>*>*  chain;

static inline ::RSG::Promise___c__DisplayClass60_0* New_ctor() ;

/// @brief Method <ThenSequence>b__0, addr 0x17f6c48, size 0x7c, virtual false, abstract: false, final false
inline ::RSG::IPromise* _ThenSequence_b__0() ;

constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RSG::IPromise*>*>*>* const& __cordl_internal_get_chain() const;

constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RSG::IPromise*>*>*>*& __cordl_internal_get_chain() ;

constexpr void __cordl_internal_set_chain(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RSG::IPromise*>*>*>*  value) ;

/// @brief Method .ctor, addr 0x17f6c40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise___c__DisplayClass60_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass60_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise___c__DisplayClass60_0(Promise___c__DisplayClass60_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass60_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise___c__DisplayClass60_0(Promise___c__DisplayClass60_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1712};

/// @brief Field chain, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RSG::IPromise*>*>*>*  ___chain;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::RSG::Promise___c__DisplayClass60_0, ___chain) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::Promise___c__DisplayClass60_0, 0x18>, "Size mismatch!");

} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.Promise/<>c__DisplayClass62_0
class CORDL_TYPE Promise___c__DisplayClass62_0 : public ::System::Object {
public:
// Declarations
/// @brief Field count, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) int32_t  count;

/// @brief Field promise, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_promise, put=__cordl_internal_set_promise)) ::RSG::Promise*  promise;

static inline ::RSG::Promise___c__DisplayClass62_0* New_ctor() ;

/// @brief Method <Sequence>b__0, addr 0x17f6ccc, size 0x1f0, virtual false, abstract: false, final false
inline ::RSG::IPromise* _Sequence_b__0(::RSG::IPromise*  prevPromise, ::System::Func_1<::RSG::IPromise*>*  fn) ;

/// @brief Method <Sequence>b__1, addr 0x17f6ec4, size 0x1c, virtual false, abstract: false, final false
inline void _Sequence_b__1() ;

constexpr int32_t const& __cordl_internal_get_count() const;

constexpr int32_t& __cordl_internal_get_count() ;

constexpr ::RSG::Promise* const& __cordl_internal_get_promise() const;

constexpr ::RSG::Promise*& __cordl_internal_get_promise() ;

constexpr void __cordl_internal_set_count(int32_t  value) ;

constexpr void __cordl_internal_set_promise(::RSG::Promise*  value) ;

/// @brief Method .ctor, addr 0x17f6cc4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise___c__DisplayClass62_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass62_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise___c__DisplayClass62_0(Promise___c__DisplayClass62_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass62_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise___c__DisplayClass62_0(Promise___c__DisplayClass62_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1713};

/// @brief Field count, offset: 0x10, size: 0x4, def value: None
 int32_t  ___count;

/// @brief Field promise, offset: 0x18, size: 0x8, def value: None
 ::RSG::Promise*  ___promise;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::RSG::Promise___c__DisplayClass62_0, ___count) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise___c__DisplayClass62_0, ___promise) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::Promise___c__DisplayClass62_0, 0x20>, "Size mismatch!");

} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.Promise/<>c__DisplayClass62_1
class CORDL_TYPE Promise___c__DisplayClass62_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::RSG::Promise___c__DisplayClass62_0*  CS$__8__locals1;

/// @brief Field fn, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_fn, put=__cordl_internal_set_fn)) ::System::Func_1<::RSG::IPromise*>*  fn;

/// @brief Field itemSequence, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_itemSequence, put=__cordl_internal_set_itemSequence)) int32_t  itemSequence;

static inline ::RSG::Promise___c__DisplayClass62_1* New_ctor() ;

/// @brief Method <Sequence>b__2, addr 0x17f6ee0, size 0x5c, virtual false, abstract: false, final false
inline ::RSG::IPromise* _Sequence_b__2() ;

/// @brief Method <Sequence>b__3, addr 0x17f6f3c, size 0x48, virtual false, abstract: false, final false
inline void _Sequence_b__3(float_t  v) ;

constexpr ::RSG::Promise___c__DisplayClass62_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::RSG::Promise___c__DisplayClass62_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::System::Func_1<::RSG::IPromise*>* const& __cordl_internal_get_fn() const;

constexpr ::System::Func_1<::RSG::IPromise*>*& __cordl_internal_get_fn() ;

constexpr int32_t const& __cordl_internal_get_itemSequence() const;

constexpr int32_t& __cordl_internal_get_itemSequence() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::RSG::Promise___c__DisplayClass62_0*  value) ;

constexpr void __cordl_internal_set_fn(::System::Func_1<::RSG::IPromise*>*  value) ;

constexpr void __cordl_internal_set_itemSequence(int32_t  value) ;

/// @brief Method .ctor, addr 0x17f6ebc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise___c__DisplayClass62_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass62_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise___c__DisplayClass62_1(Promise___c__DisplayClass62_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass62_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise___c__DisplayClass62_1(Promise___c__DisplayClass62_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1714};

/// @brief Field itemSequence, offset: 0x10, size: 0x4, def value: None
 int32_t  ___itemSequence;

/// @brief Field fn, offset: 0x18, size: 0x8, def value: None
 ::System::Func_1<::RSG::IPromise*>*  ___fn;

/// @brief Field CS$<>8__locals1, offset: 0x20, size: 0x8, def value: None
 ::RSG::Promise___c__DisplayClass62_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::RSG::Promise___c__DisplayClass62_1, ___itemSequence) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise___c__DisplayClass62_1, ___fn) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise___c__DisplayClass62_1, ___CS$__8__locals1) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::Promise___c__DisplayClass62_1, 0x28>, "Size mismatch!");

} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.Promise/<>c__DisplayClass63_0
class CORDL_TYPE Promise___c__DisplayClass63_0 : public ::System::Object {
public:
// Declarations
/// @brief Field chain, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_chain, put=__cordl_internal_set_chain)) ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  chain;

static inline ::RSG::Promise___c__DisplayClass63_0* New_ctor() ;

/// @brief Method <ThenRace>b__0, addr 0x17f6f8c, size 0x7c, virtual false, abstract: false, final false
inline ::RSG::IPromise* _ThenRace_b__0() ;

constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>* const& __cordl_internal_get_chain() const;

constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*& __cordl_internal_get_chain() ;

constexpr void __cordl_internal_set_chain(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  value) ;

/// @brief Method .ctor, addr 0x17f6f84, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise___c__DisplayClass63_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass63_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise___c__DisplayClass63_0(Promise___c__DisplayClass63_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass63_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise___c__DisplayClass63_0(Promise___c__DisplayClass63_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1715};

/// @brief Field chain, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  ___chain;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::RSG::Promise___c__DisplayClass63_0, ___chain) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::Promise___c__DisplayClass63_0, 0x18>, "Size mismatch!");

} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename ConvertedT>
// Is value type: false
// CS Name: RSG.Promise/<>c__DisplayClass64_0`1<ConvertedT>
class CORDL_TYPE Promise___c__DisplayClass64_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field chain, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_chain, put=__cordl_internal_set_chain)) ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  chain;

static inline ::RSG::Promise___c__DisplayClass64_0_1<ConvertedT>* New_ctor() ;

/// @brief Method <ThenRace>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::RSG::IPromise_1<ConvertedT>* _ThenRace_b__0() ;

constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>* const& __cordl_internal_get_chain() const;

constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*& __cordl_internal_get_chain() ;

constexpr void __cordl_internal_set_chain(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise___c__DisplayClass64_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass64_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise___c__DisplayClass64_0_1(Promise___c__DisplayClass64_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass64_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise___c__DisplayClass64_0_1(Promise___c__DisplayClass64_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1716};

/// @brief Field chain, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  ___chain;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.Promise/<>c__DisplayClass66_0
class CORDL_TYPE Promise___c__DisplayClass66_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__2, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__2, put=__cordl_internal_set___9__2)) ::System::Action_1<::System::Exception*>*  __9__2;

/// @brief Field <>9__3, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__3, put=__cordl_internal_set___9__3)) ::System::Action*  __9__3;

/// @brief Field progress, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) ::ArrayW<float_t,::Array<float_t>*>  progress;

/// @brief Field resultPromise, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultPromise, put=__cordl_internal_set_resultPromise)) ::RSG::Promise*  resultPromise;

static inline ::RSG::Promise___c__DisplayClass66_0* New_ctor() ;

/// @brief Method <Race>b__0, addr 0x17f7010, size 0x300, virtual false, abstract: false, final false
inline void _Race_b__0(::RSG::IPromise*  promise, int32_t  index) ;

/// @brief Method <Race>b__2, addr 0x17f7318, size 0x2c, virtual false, abstract: false, final false
inline void _Race_b__2(::System::Exception*  ex) ;

/// @brief Method <Race>b__3, addr 0x17f7344, size 0x2c, virtual false, abstract: false, final false
inline void _Race_b__3() ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get___9__2() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get___9__2() ;

constexpr ::System::Action* const& __cordl_internal_get___9__3() const;

constexpr ::System::Action*& __cordl_internal_get___9__3() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_progress() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_progress() ;

constexpr ::RSG::Promise* const& __cordl_internal_get_resultPromise() const;

constexpr ::RSG::Promise*& __cordl_internal_get_resultPromise() ;

constexpr void __cordl_internal_set___9__2(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set___9__3(::System::Action*  value) ;

constexpr void __cordl_internal_set_progress(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set_resultPromise(::RSG::Promise*  value) ;

/// @brief Method .ctor, addr 0x17f7008, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise___c__DisplayClass66_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass66_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise___c__DisplayClass66_0(Promise___c__DisplayClass66_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass66_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise___c__DisplayClass66_0(Promise___c__DisplayClass66_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1717};

/// @brief Field progress, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___progress;

/// @brief Field resultPromise, offset: 0x18, size: 0x8, def value: None
 ::RSG::Promise*  ___resultPromise;

/// @brief Field <>9__2, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  _____9__2;

/// @brief Field <>9__3, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  _____9__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::RSG::Promise___c__DisplayClass66_0, ___progress) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise___c__DisplayClass66_0, ___resultPromise) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise___c__DisplayClass66_0, _____9__2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise___c__DisplayClass66_0, _____9__3) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::Promise___c__DisplayClass66_0, 0x30>, "Size mismatch!");

} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.Promise/<>c__DisplayClass66_1
class CORDL_TYPE Promise___c__DisplayClass66_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::RSG::Promise___c__DisplayClass66_0*  CS$__8__locals1;

/// @brief Field index, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

static inline ::RSG::Promise___c__DisplayClass66_1* New_ctor() ;

/// @brief Method <Race>b__1, addr 0x17f7370, size 0x58, virtual false, abstract: false, final false
inline void _Race_b__1(float_t  v) ;

constexpr ::RSG::Promise___c__DisplayClass66_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::RSG::Promise___c__DisplayClass66_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::RSG::Promise___c__DisplayClass66_0*  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

/// @brief Method .ctor, addr 0x17f7310, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise___c__DisplayClass66_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass66_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise___c__DisplayClass66_1(Promise___c__DisplayClass66_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass66_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise___c__DisplayClass66_1(Promise___c__DisplayClass66_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1718};

/// @brief Field index, offset: 0x10, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::RSG::Promise___c__DisplayClass66_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::RSG::Promise___c__DisplayClass66_1, ___index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise___c__DisplayClass66_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::Promise___c__DisplayClass66_1, 0x20>, "Size mismatch!");

} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.Promise/<>c__DisplayClass69_0
class CORDL_TYPE Promise___c__DisplayClass69_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onComplete, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onComplete, put=__cordl_internal_set_onComplete)) ::System::Action*  onComplete;

/// @brief Field promise, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_promise, put=__cordl_internal_set_promise)) ::RSG::Promise*  promise;

static inline ::RSG::Promise___c__DisplayClass69_0* New_ctor() ;

/// @brief Method <Finally>b__0, addr 0x17f73d0, size 0x1c, virtual false, abstract: false, final false
inline void _Finally_b__0() ;

/// @brief Method <Finally>b__1, addr 0x17f73ec, size 0xe4, virtual false, abstract: false, final false
inline void _Finally_b__1(::System::Exception*  e) ;

constexpr ::System::Action* const& __cordl_internal_get_onComplete() const;

constexpr ::System::Action*& __cordl_internal_get_onComplete() ;

constexpr ::RSG::Promise* const& __cordl_internal_get_promise() const;

constexpr ::RSG::Promise*& __cordl_internal_get_promise() ;

constexpr void __cordl_internal_set_onComplete(::System::Action*  value) ;

constexpr void __cordl_internal_set_promise(::RSG::Promise*  value) ;

/// @brief Method .ctor, addr 0x17f73c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise___c__DisplayClass69_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass69_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise___c__DisplayClass69_0(Promise___c__DisplayClass69_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass69_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise___c__DisplayClass69_0(Promise___c__DisplayClass69_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1719};

/// @brief Field promise, offset: 0x10, size: 0x8, def value: None
 ::RSG::Promise*  ___promise;

/// @brief Field onComplete, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___onComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::RSG::Promise___c__DisplayClass69_0, ___promise) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise___c__DisplayClass69_0, ___onComplete) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::Promise___c__DisplayClass69_0, 0x20>, "Size mismatch!");

} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.Promise/<>c__DisplayClass70_0
class CORDL_TYPE Promise___c__DisplayClass70_0 : public ::System::Object {
public:
// Declarations
/// @brief Field promise, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_promise, put=__cordl_internal_set_promise)) ::RSG::Promise*  promise;

static inline ::RSG::Promise___c__DisplayClass70_0* New_ctor() ;

/// @brief Method <ContinueWith>b__0, addr 0x17f74d8, size 0x1c, virtual false, abstract: false, final false
inline void _ContinueWith_b__0() ;

/// @brief Method <ContinueWith>b__1, addr 0x17f74f4, size 0x1c, virtual false, abstract: false, final false
inline void _ContinueWith_b__1(::System::Exception*  e) ;

constexpr ::RSG::Promise* const& __cordl_internal_get_promise() const;

constexpr ::RSG::Promise*& __cordl_internal_get_promise() ;

constexpr void __cordl_internal_set_promise(::RSG::Promise*  value) ;

/// @brief Method .ctor, addr 0x17f74d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise___c__DisplayClass70_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass70_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise___c__DisplayClass70_0(Promise___c__DisplayClass70_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass70_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise___c__DisplayClass70_0(Promise___c__DisplayClass70_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1720};

/// @brief Field promise, offset: 0x10, size: 0x8, def value: None
 ::RSG::Promise*  ___promise;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::RSG::Promise___c__DisplayClass70_0, ___promise) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::Promise___c__DisplayClass70_0, 0x18>, "Size mismatch!");

} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename ConvertedT>
// Is value type: false
// CS Name: RSG.Promise/<>c__DisplayClass71_0`1<ConvertedT>
class CORDL_TYPE Promise___c__DisplayClass71_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field promise, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_promise, put=__cordl_internal_set_promise)) ::RSG::Promise*  promise;

static inline ::RSG::Promise___c__DisplayClass71_0_1<ConvertedT>* New_ctor() ;

/// @brief Method <ContinueWith>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ContinueWith_b__0() ;

/// @brief Method <ContinueWith>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ContinueWith_b__1(::System::Exception*  e) ;

constexpr ::RSG::Promise* const& __cordl_internal_get_promise() const;

constexpr ::RSG::Promise*& __cordl_internal_get_promise() ;

constexpr void __cordl_internal_set_promise(::RSG::Promise*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise___c__DisplayClass71_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass71_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise___c__DisplayClass71_0_1(Promise___c__DisplayClass71_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise___c__DisplayClass71_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise___c__DisplayClass71_0_1(Promise___c__DisplayClass71_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1721};

/// @brief Field promise, offset: 0x10, size: 0x8, def value: None
 ::RSG::Promise*  ___promise;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies RSG.IPendingPromise, RSG.IPromise, RSG.IPromiseInfo, RSG.IRejectable, RSG.PromiseState, System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.Promise
class CORDL_TYPE Promise : public ::System::Object {
public:
// Declarations
using ResolveHandler = ::RSG::Promise_ResolveHandler;

using __c__DisplayClass34_0 = ::RSG::Promise___c__DisplayClass34_0;

using __c__DisplayClass36_0 = ::RSG::Promise___c__DisplayClass36_0;

using __c__DisplayClass44_0 = ::RSG::Promise___c__DisplayClass44_0;

template<typename ConvertedT>
using __c__DisplayClass51_0_1 = ::RSG::Promise___c__DisplayClass51_0_1<ConvertedT>;

using __c__DisplayClass52_0 = ::RSG::Promise___c__DisplayClass52_0;

using __c__DisplayClass53_0 = ::RSG::Promise___c__DisplayClass53_0;

using __c__DisplayClass56_0 = ::RSG::Promise___c__DisplayClass56_0;

template<typename ConvertedT>
using __c__DisplayClass57_0_1 = ::RSG::Promise___c__DisplayClass57_0_1<ConvertedT>;

using __c__DisplayClass59_0 = ::RSG::Promise___c__DisplayClass59_0;

using __c__DisplayClass59_1 = ::RSG::Promise___c__DisplayClass59_1;

using __c__DisplayClass60_0 = ::RSG::Promise___c__DisplayClass60_0;

using __c__DisplayClass62_0 = ::RSG::Promise___c__DisplayClass62_0;

using __c__DisplayClass62_1 = ::RSG::Promise___c__DisplayClass62_1;

using __c__DisplayClass63_0 = ::RSG::Promise___c__DisplayClass63_0;

template<typename ConvertedT>
using __c__DisplayClass64_0_1 = ::RSG::Promise___c__DisplayClass64_0_1<ConvertedT>;

using __c__DisplayClass66_0 = ::RSG::Promise___c__DisplayClass66_0;

using __c__DisplayClass66_1 = ::RSG::Promise___c__DisplayClass66_1;

using __c__DisplayClass69_0 = ::RSG::Promise___c__DisplayClass69_0;

using __c__DisplayClass70_0 = ::RSG::Promise___c__DisplayClass70_0;

template<typename ConvertedT>
using __c__DisplayClass71_0_1 = ::RSG::Promise___c__DisplayClass71_0_1<ConvertedT>;

 __declspec(property(get=get_CurState, put=set_CurState)) ::RSG::PromiseState  CurState;

/// @brief Field EnablePromiseTracking, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_EnablePromiseTracking, put=setStaticF_EnablePromiseTracking)) bool  EnablePromiseTracking;

 __declspec(property(get=get_Id)) int32_t  Id;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

/// @brief Field PendingPromises, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PendingPromises, put=setStaticF_PendingPromises)) ::System::Collections::Generic::HashSet_1<::RSG::IPromiseInfo*>*  PendingPromises;

/// @brief Field <CurState>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurState_k__BackingField, put=__cordl_internal_set__CurState_k__BackingField)) ::RSG::PromiseState  _CurState_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Field id, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) int32_t  id;

/// @brief Field nextPromiseId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_nextPromiseId, put=setStaticF_nextPromiseId)) int32_t  nextPromiseId;

/// @brief Field progressHandlers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressHandlers, put=__cordl_internal_set_progressHandlers)) ::System::Collections::Generic::List_1<::RSG::ProgressHandler>*  progressHandlers;

/// @brief Field rejectHandlers, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_rejectHandlers, put=__cordl_internal_set_rejectHandlers)) ::System::Collections::Generic::List_1<::RSG::RejectHandler>*  rejectHandlers;

/// @brief Field rejectionException, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_rejectionException, put=__cordl_internal_set_rejectionException)) ::System::Exception*  rejectionException;

/// @brief Field resolveHandlers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_resolveHandlers, put=__cordl_internal_set_resolveHandlers)) ::System::Collections::Generic::List_1<::RSG::Promise_ResolveHandler>*  resolveHandlers;

/// @brief Field unhandlerException, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_unhandlerException, put=setStaticF_unhandlerException)) ::System::EventHandler_1<::RSG::ExceptionEventArgs*>*  unhandlerException;

/// @brief Convert operator to "::RSG::IPendingPromise"
constexpr operator  ::RSG::IPendingPromise*() noexcept;

/// @brief Convert operator to "::RSG::IPromise"
constexpr operator  ::RSG::IPromise*() noexcept;

/// @brief Convert operator to "::RSG::IPromiseInfo"
constexpr operator  ::RSG::IPromiseInfo*() noexcept;

/// @brief Convert operator to "::RSG::IRejectable"
constexpr operator  ::RSG::IRejectable*() noexcept;

/// @brief Method ActionHandlers, addr 0x17f4fd4, size 0x7c, virtual false, abstract: false, final false
inline void ActionHandlers(::RSG::IRejectable*  resultPromise, ::System::Action*  resolveHandler, ::System::Action_1<::System::Exception*>*  rejectHandler) ;

/// @brief Method AddProgressHandler, addr 0x17f4224, size 0x100, virtual false, abstract: false, final false
inline void AddProgressHandler(::System::Action_1<float_t>*  onProgress, ::RSG::IRejectable*  rejectable) ;

/// @brief Method AddRejectHandler, addr 0x17f4024, size 0x100, virtual false, abstract: false, final false
inline void AddRejectHandler(::System::Action_1<::System::Exception*>*  onRejected, ::RSG::IRejectable*  rejectable) ;

/// @brief Method AddResolveHandler, addr 0x17f4124, size 0x100, virtual false, abstract: false, final false
inline void AddResolveHandler(::System::Action*  onResolved, ::RSG::IRejectable*  rejectable) ;

/// @brief Method All, addr 0x17f5420, size 0x54, virtual false, abstract: false, final false
static inline ::RSG::IPromise* All(::ArrayW<::RSG::IPromise*,::Array<::RSG::IPromise*>*>  promises) ;

/// @brief Method All, addr 0x17f5474, size 0x190, virtual false, abstract: false, final false
static inline ::RSG::IPromise* All(::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*  promises) ;

/// @brief Method Catch, addr 0x17f4e1c, size 0x1b0, virtual true, abstract: false, final true
inline ::RSG::IPromise* Catch(::System::Action_1<::System::Exception*>*  onRejected) ;

/// @brief Method ClearHandlers, addr 0x17f4670, size 0xc, virtual false, abstract: false, final false
inline void ClearHandlers() ;

/// @brief Method ContinueWith, addr 0x17f5e94, size 0x160, virtual true, abstract: false, final true
inline ::RSG::IPromise* ContinueWith(::System::Func_1<::RSG::IPromise*>*  onComplete) ;

/// @brief Method ContinueWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* ContinueWith(::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*  onComplete) ;

/// @brief Method Done, addr 0x17f4d9c, size 0x80, virtual true, abstract: false, final true
inline void Done() ;

/// @brief Method Done, addr 0x17f4c80, size 0x110, virtual true, abstract: false, final true
inline void Done(::System::Action*  onResolved) ;

/// @brief Method Done, addr 0x17f4b5c, size 0x11c, virtual true, abstract: false, final true
inline void Done(::System::Action*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected) ;

/// @brief Method Finally, addr 0x17f5d38, size 0x15c, virtual true, abstract: false, final true
inline ::RSG::IPromise* Finally(::System::Action*  onComplete) ;

/// @brief Method GetPendingPromises, addr 0x17f3be0, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::RSG::IPromiseInfo*>* GetPendingPromises() ;

/// @brief Method InvokeProgressHandler, addr 0x17f4558, size 0x118, virtual false, abstract: false, final false
inline void InvokeProgressHandler(::System::Action_1<float_t>*  callback, ::RSG::IRejectable*  rejectable, float_t  progress) ;

/// @brief Method InvokeProgressHandlers, addr 0x17f480c, size 0xf8, virtual false, abstract: false, final false
inline void InvokeProgressHandlers(float_t  progress) ;

/// @brief Method InvokeRejectHandler, addr 0x17f4324, size 0x11c, virtual false, abstract: false, final false
inline void InvokeRejectHandler(::System::Action_1<::System::Exception*>*  callback, ::RSG::IRejectable*  rejectable, ::System::Exception*  value) ;

/// @brief Method InvokeRejectHandlers, addr 0x17f467c, size 0xe4, virtual false, abstract: false, final false
inline void InvokeRejectHandlers(::System::Exception*  ex) ;

/// @brief Method InvokeResolveHandler, addr 0x17f4440, size 0x118, virtual false, abstract: false, final false
inline void InvokeResolveHandler(::System::Action*  callback, ::RSG::IRejectable*  rejectable) ;

/// @brief Method InvokeResolveHandlers, addr 0x17f4760, size 0xac, virtual false, abstract: false, final false
inline void InvokeResolveHandlers() ;

static inline ::RSG::Promise* New_ctor() ;

static inline ::RSG::Promise* New_ctor(::System::Action_2<::System::Action*,::System::Action_1<::System::Exception*>*>*  resolver) ;

/// @brief Method NextId, addr 0x17f3c60, size 0x60, virtual false, abstract: false, final false
static inline int32_t NextId() ;

/// @brief Method Progress, addr 0x17f5ff4, size 0x2c, virtual true, abstract: false, final true
inline ::RSG::IPromise* Progress(::System::Action_1<float_t>*  onProgress) ;

/// @brief Method ProgressHandlers, addr 0x17f5050, size 0x1c, virtual false, abstract: false, final false
inline void ProgressHandlers(::RSG::IRejectable*  resultPromise, ::System::Action_1<float_t>*  progressHandler) ;

/// @brief Method PropagateUnhandledException, addr 0x17f6020, size 0xd8, virtual false, abstract: false, final false
static inline void PropagateUnhandledException(::System::Object*  sender, ::System::Exception*  ex) ;

/// @brief Method Race, addr 0x17f5ac8, size 0x54, virtual false, abstract: false, final false
static inline ::RSG::IPromise* Race(::ArrayW<::RSG::IPromise*,::Array<::RSG::IPromise*>*>  promises) ;

/// @brief Method Race, addr 0x17f5b1c, size 0x1b4, virtual false, abstract: false, final false
static inline ::RSG::IPromise* Race(::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*  promises) ;

/// @brief Method Reject, addr 0x17f3e98, size 0x18c, virtual true, abstract: false, final true
inline void Reject(::System::Exception*  ex) ;

/// @brief Method Rejected, addr 0x17f5cd0, size 0x68, virtual false, abstract: false, final false
static inline ::RSG::IPromise* Rejected(::System::Exception*  ex) ;

/// @brief Method ReportProgress, addr 0x17f4a7c, size 0xe0, virtual true, abstract: false, final true
inline void ReportProgress(float_t  progress) ;

/// @brief Method Resolve, addr 0x17f4904, size 0x178, virtual true, abstract: false, final true
inline void Resolve() ;

/// @brief Method Resolved, addr 0x17f5604, size 0x60, virtual false, abstract: false, final false
static inline ::RSG::IPromise* Resolved() ;

/// @brief Method Sequence, addr 0x17f5724, size 0x54, virtual false, abstract: false, final false
static inline ::RSG::IPromise* Sequence(::ArrayW<::System::Func_1<::RSG::IPromise*>*,::Array<::System::Func_1<::RSG::IPromise*>*>*>  fns) ;

/// @brief Method Sequence, addr 0x17f5778, size 0x290, virtual false, abstract: false, final false
static inline ::RSG::IPromise* Sequence(::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RSG::IPromise*>*>*  fns) ;

/// @brief Method Then, addr 0x17f4d90, size 0xc, virtual true, abstract: false, final true
inline ::RSG::IPromise* Then(::System::Action*  onResolved) ;

/// @brief Method Then, addr 0x17f4c78, size 0x8, virtual true, abstract: false, final true
inline ::RSG::IPromise* Then(::System::Action*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected) ;

/// @brief Method Then, addr 0x17f51e8, size 0x170, virtual true, abstract: false, final true
inline ::RSG::IPromise* Then(::System::Action*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected, ::System::Action_1<float_t>*  onProgress) ;

/// @brief Method Then, addr 0x17f506c, size 0xc, virtual true, abstract: false, final true
inline ::RSG::IPromise* Then(::System::Func_1<::RSG::IPromise*>*  onResolved) ;

/// @brief Method Then, addr 0x17f5358, size 0x8, virtual true, abstract: false, final true
inline ::RSG::IPromise* Then(::System::Func_1<::RSG::IPromise*>*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected) ;

/// @brief Method Then, addr 0x17f5078, size 0x170, virtual true, abstract: false, final true
inline ::RSG::IPromise* Then(::System::Func_1<::RSG::IPromise*>*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected, ::System::Action_1<float_t>*  onProgress) ;

/// @brief Method Then, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* Then(::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*  onResolved) ;

/// @brief Method Then, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* Then(::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*  onResolved, ::System::Func_2<::System::Exception*,::RSG::IPromise_1<ConvertedT>*>*  onRejected) ;

/// @brief Method Then, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* Then(::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*  onResolved, ::System::Func_2<::System::Exception*,::RSG::IPromise_1<ConvertedT>*>*  onRejected, ::System::Action_1<float_t>*  onProgress) ;

/// @brief Method ThenAll, addr 0x17f5360, size 0xc0, virtual true, abstract: false, final true
inline ::RSG::IPromise* ThenAll(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  chain) ;

/// @brief Method ThenAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename ConvertedT>
inline ::RSG::IPromise_1<::System::Collections::Generic::IEnumerable_1<ConvertedT>*>* ThenAll(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  chain) ;

/// @brief Method ThenRace, addr 0x17f5a08, size 0xc0, virtual true, abstract: false, final true
inline ::RSG::IPromise* ThenRace(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  chain) ;

/// @brief Method ThenRace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* ThenRace(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  chain) ;

/// @brief Method ThenSequence, addr 0x17f5664, size 0xc0, virtual true, abstract: false, final true
inline ::RSG::IPromise* ThenSequence(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RSG::IPromise*>*>*>*  chain) ;

/// @brief Method WithName, addr 0x17f4fcc, size 0x8, virtual true, abstract: false, final true
inline ::RSG::IPromise* WithName(::StringW  name) ;

/// @brief Method <Done>b__40_0, addr 0x17f6194, size 0x64, virtual false, abstract: false, final false
inline void _Done_b__40_0(::System::Exception*  ex) ;

/// @brief Method <Done>b__41_0, addr 0x17f61f8, size 0x64, virtual false, abstract: false, final false
inline void _Done_b__41_0(::System::Exception*  ex) ;

/// @brief Method <Done>b__42_0, addr 0x17f625c, size 0x64, virtual false, abstract: false, final false
inline void _Done_b__42_0(::System::Exception*  ex) ;

/// @brief Method <InvokeResolveHandlers>b__35_0, addr 0x17f6190, size 0x4, virtual false, abstract: false, final false
inline void _InvokeResolveHandlers_b__35_0(::RSG::Promise_ResolveHandler  handler) ;

constexpr ::RSG::PromiseState const& __cordl_internal_get__CurState_k__BackingField() const;

constexpr ::RSG::PromiseState& __cordl_internal_get__CurState_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_id() const;

constexpr int32_t& __cordl_internal_get_id() ;

constexpr ::System::Collections::Generic::List_1<::RSG::ProgressHandler>* const& __cordl_internal_get_progressHandlers() const;

constexpr ::System::Collections::Generic::List_1<::RSG::ProgressHandler>*& __cordl_internal_get_progressHandlers() ;

constexpr ::System::Collections::Generic::List_1<::RSG::RejectHandler>* const& __cordl_internal_get_rejectHandlers() const;

constexpr ::System::Collections::Generic::List_1<::RSG::RejectHandler>*& __cordl_internal_get_rejectHandlers() ;

constexpr ::System::Exception* const& __cordl_internal_get_rejectionException() const;

constexpr ::System::Exception*& __cordl_internal_get_rejectionException() ;

constexpr ::System::Collections::Generic::List_1<::RSG::Promise_ResolveHandler>* const& __cordl_internal_get_resolveHandlers() const;

constexpr ::System::Collections::Generic::List_1<::RSG::Promise_ResolveHandler>*& __cordl_internal_get_resolveHandlers() ;

constexpr void __cordl_internal_set__CurState_k__BackingField(::RSG::PromiseState  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_id(int32_t  value) ;

constexpr void __cordl_internal_set_progressHandlers(::System::Collections::Generic::List_1<::RSG::ProgressHandler>*  value) ;

constexpr void __cordl_internal_set_rejectHandlers(::System::Collections::Generic::List_1<::RSG::RejectHandler>*  value) ;

constexpr void __cordl_internal_set_rejectionException(::System::Exception*  value) ;

constexpr void __cordl_internal_set_resolveHandlers(::System::Collections::Generic::List_1<::RSG::Promise_ResolveHandler>*  value) ;

/// @brief Method .ctor, addr 0x17f3214, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x17f3cc0, size 0x1d8, virtual false, abstract: false, final false
inline void _ctor(::System::Action_2<::System::Action*,::System::Action_1<::System::Exception*>*>*  resolver) ;

/// @brief Method add_UnhandledException, addr 0x17f3a38, size 0xd4, virtual false, abstract: false, final false
static inline void add_UnhandledException(::System::EventHandler_1<::RSG::ExceptionEventArgs*>*  value) ;

static inline bool getStaticF_EnablePromiseTracking() ;

static inline ::System::Collections::Generic::HashSet_1<::RSG::IPromiseInfo*>* getStaticF_PendingPromises() ;

static inline int32_t getStaticF_nextPromiseId() ;

static inline ::System::EventHandler_1<::RSG::ExceptionEventArgs*>* getStaticF_unhandlerException() ;

/// @brief Method get_CurState, addr 0x17f3c50, size 0x8, virtual false, abstract: false, final false
inline ::RSG::PromiseState get_CurState() ;

/// @brief Method get_Id, addr 0x17f3c38, size 0x8, virtual true, abstract: false, final true
inline int32_t get_Id() ;

/// @brief Method get_Name, addr 0x17f3c40, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Name() ;

/// @brief Convert to "::RSG::IPendingPromise"
constexpr ::RSG::IPendingPromise* i___RSG__IPendingPromise() noexcept;

/// @brief Convert to "::RSG::IPromise"
constexpr ::RSG::IPromise* i___RSG__IPromise() noexcept;

/// @brief Convert to "::RSG::IPromiseInfo"
constexpr ::RSG::IPromiseInfo* i___RSG__IPromiseInfo() noexcept;

/// @brief Convert to "::RSG::IRejectable"
constexpr ::RSG::IRejectable* i___RSG__IRejectable() noexcept;

/// @brief Method remove_UnhandledException, addr 0x17f3b0c, size 0xd4, virtual false, abstract: false, final false
static inline void remove_UnhandledException(::System::EventHandler_1<::RSG::ExceptionEventArgs*>*  value) ;

static inline void setStaticF_EnablePromiseTracking(bool  value) ;

static inline void setStaticF_PendingPromises(::System::Collections::Generic::HashSet_1<::RSG::IPromiseInfo*>*  value) ;

static inline void setStaticF_nextPromiseId(int32_t  value) ;

static inline void setStaticF_unhandlerException(::System::EventHandler_1<::RSG::ExceptionEventArgs*>*  value) ;

/// @brief Method set_CurState, addr 0x17f3c58, size 0x8, virtual false, abstract: false, final false
inline void set_CurState(::RSG::PromiseState  value) ;

/// @brief Method set_Name, addr 0x17f3c48, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise(Promise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise(Promise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1722};

/// @brief Field rejectionException, offset: 0x10, size: 0x8, def value: None
 ::System::Exception*  ___rejectionException;

/// @brief Field rejectHandlers, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::RSG::RejectHandler>*  ___rejectHandlers;

/// @brief Field resolveHandlers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::RSG::Promise_ResolveHandler>*  ___resolveHandlers;

/// @brief Field progressHandlers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::RSG::ProgressHandler>*  ___progressHandlers;

/// @brief Field id, offset: 0x30, size: 0x4, def value: None
 int32_t  ___id;

/// @brief Field <Name>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// @brief Field <CurState>k__BackingField, offset: 0x40, size: 0x4, def value: None
 ::RSG::PromiseState  ____CurState_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::RSG::Promise, ___rejectionException) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise, ___rejectHandlers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise, ___resolveHandlers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise, ___progressHandlers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise, ___id) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise, ____Name_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RSG::Promise, ____CurState_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::Promise, 0x48>, "Size mismatch!");

} // namespace end def RSG
NEED_NO_BOX(::RSG::Promise);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise*, "RSG", "Promise");
NEED_NO_BOX(::RSG::Promise___c__DisplayClass34_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise___c__DisplayClass34_0*, "RSG", "Promise/<>c__DisplayClass34_0");
NEED_NO_BOX(::RSG::Promise___c__DisplayClass36_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise___c__DisplayClass36_0*, "RSG", "Promise/<>c__DisplayClass36_0");
NEED_NO_BOX(::RSG::Promise___c__DisplayClass44_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise___c__DisplayClass44_0*, "RSG", "Promise/<>c__DisplayClass44_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise___c__DisplayClass51_0_1, "RSG", "Promise/<>c__DisplayClass51_0`1");
NEED_NO_BOX(::RSG::Promise___c__DisplayClass52_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise___c__DisplayClass52_0*, "RSG", "Promise/<>c__DisplayClass52_0");
NEED_NO_BOX(::RSG::Promise___c__DisplayClass53_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise___c__DisplayClass53_0*, "RSG", "Promise/<>c__DisplayClass53_0");
NEED_NO_BOX(::RSG::Promise___c__DisplayClass56_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise___c__DisplayClass56_0*, "RSG", "Promise/<>c__DisplayClass56_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise___c__DisplayClass57_0_1, "RSG", "Promise/<>c__DisplayClass57_0`1");
NEED_NO_BOX(::RSG::Promise___c__DisplayClass59_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise___c__DisplayClass59_0*, "RSG", "Promise/<>c__DisplayClass59_0");
NEED_NO_BOX(::RSG::Promise___c__DisplayClass59_1);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise___c__DisplayClass59_1*, "RSG", "Promise/<>c__DisplayClass59_1");
NEED_NO_BOX(::RSG::Promise___c__DisplayClass60_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise___c__DisplayClass60_0*, "RSG", "Promise/<>c__DisplayClass60_0");
NEED_NO_BOX(::RSG::Promise___c__DisplayClass62_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise___c__DisplayClass62_0*, "RSG", "Promise/<>c__DisplayClass62_0");
NEED_NO_BOX(::RSG::Promise___c__DisplayClass62_1);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise___c__DisplayClass62_1*, "RSG", "Promise/<>c__DisplayClass62_1");
NEED_NO_BOX(::RSG::Promise___c__DisplayClass63_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise___c__DisplayClass63_0*, "RSG", "Promise/<>c__DisplayClass63_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise___c__DisplayClass64_0_1, "RSG", "Promise/<>c__DisplayClass64_0`1");
NEED_NO_BOX(::RSG::Promise___c__DisplayClass66_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise___c__DisplayClass66_0*, "RSG", "Promise/<>c__DisplayClass66_0");
NEED_NO_BOX(::RSG::Promise___c__DisplayClass66_1);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise___c__DisplayClass66_1*, "RSG", "Promise/<>c__DisplayClass66_1");
NEED_NO_BOX(::RSG::Promise___c__DisplayClass69_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise___c__DisplayClass69_0*, "RSG", "Promise/<>c__DisplayClass69_0");
NEED_NO_BOX(::RSG::Promise___c__DisplayClass70_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise___c__DisplayClass70_0*, "RSG", "Promise/<>c__DisplayClass70_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise___c__DisplayClass71_0_1, "RSG", "Promise/<>c__DisplayClass71_0`1");
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise_ResolveHandler, "RSG", "Promise/ResolveHandler");
