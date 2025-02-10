#pragma once
// IWYU pragma private; include "RSG/Promise_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RSG/zzzz__IPendingPromise_1_def.hpp"
#include "RSG/zzzz__IPromiseInfo_def.hpp"
#include "RSG/zzzz__IPromise_1_def.hpp"
#include "RSG/zzzz__IRejectable_def.hpp"
#include "RSG/zzzz__PromiseState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Promise_1)
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
class Promise_1___c__DisplayClass24_0;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass26_0;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass34_0;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass35_0;
}
namespace RSG {
template<typename PromisedT,typename ConvertedT>
class Promise_1___c__DisplayClass42_0_1;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass43_0;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass44_0;
}
namespace RSG {
template<typename PromisedT,typename ConvertedT>
class Promise_1___c__DisplayClass45_0_1;
}
namespace RSG {
template<typename PromisedT,typename ConvertedT>
class Promise_1___c__DisplayClass48_0_1;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass49_0;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass51_0;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass51_1;
}
namespace RSG {
template<typename PromisedT,typename ConvertedT>
class Promise_1___c__DisplayClass52_0_1;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass53_0;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass55_0;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass55_1;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass58_0;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass59_0;
}
namespace RSG {
template<typename PromisedT,typename ConvertedT>
class Promise_1___c__DisplayClass60_0_1;
}
namespace RSG {
class Promise;
}
namespace RSG {
struct RejectHandler;
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
// Forward declare root types
namespace RSG {
template<typename PromisedT>
class Promise_1;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass24_0;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass26_0;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass34_0;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass35_0;
}
namespace RSG {
template<typename PromisedT,typename ConvertedT>
class Promise_1___c__DisplayClass42_0_1;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass43_0;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass44_0;
}
namespace RSG {
template<typename PromisedT,typename ConvertedT>
class Promise_1___c__DisplayClass45_0_1;
}
namespace RSG {
template<typename PromisedT,typename ConvertedT>
class Promise_1___c__DisplayClass48_0_1;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass49_0;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass51_0;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass51_1;
}
namespace RSG {
template<typename PromisedT,typename ConvertedT>
class Promise_1___c__DisplayClass52_0_1;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass53_0;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass55_0;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass55_1;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass58_0;
}
namespace RSG {
template<typename PromisedT>
class Promise_1___c__DisplayClass59_0;
}
namespace RSG {
template<typename PromisedT,typename ConvertedT>
class Promise_1___c__DisplayClass60_0_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::RSG::Promise_1);
MARK_GEN_REF_PTR_T(::RSG::Promise_1___c__DisplayClass24_0);
MARK_GEN_REF_PTR_T(::RSG::Promise_1___c__DisplayClass26_0);
MARK_GEN_REF_PTR_T(::RSG::Promise_1___c__DisplayClass34_0);
MARK_GEN_REF_PTR_T(::RSG::Promise_1___c__DisplayClass35_0);
MARK_GEN_REF_PTR_T(::RSG::Promise_1___c__DisplayClass42_0_1);
MARK_GEN_REF_PTR_T(::RSG::Promise_1___c__DisplayClass43_0);
MARK_GEN_REF_PTR_T(::RSG::Promise_1___c__DisplayClass44_0);
MARK_GEN_REF_PTR_T(::RSG::Promise_1___c__DisplayClass45_0_1);
MARK_GEN_REF_PTR_T(::RSG::Promise_1___c__DisplayClass48_0_1);
MARK_GEN_REF_PTR_T(::RSG::Promise_1___c__DisplayClass49_0);
MARK_GEN_REF_PTR_T(::RSG::Promise_1___c__DisplayClass51_0);
MARK_GEN_REF_PTR_T(::RSG::Promise_1___c__DisplayClass51_1);
MARK_GEN_REF_PTR_T(::RSG::Promise_1___c__DisplayClass52_0_1);
MARK_GEN_REF_PTR_T(::RSG::Promise_1___c__DisplayClass53_0);
MARK_GEN_REF_PTR_T(::RSG::Promise_1___c__DisplayClass55_0);
MARK_GEN_REF_PTR_T(::RSG::Promise_1___c__DisplayClass55_1);
MARK_GEN_REF_PTR_T(::RSG::Promise_1___c__DisplayClass58_0);
MARK_GEN_REF_PTR_T(::RSG::Promise_1___c__DisplayClass59_0);
MARK_GEN_REF_PTR_T(::RSG::Promise_1___c__DisplayClass60_0_1);
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename PromisedT>
// Is value type: false
// CS Name: RSG.Promise`1/<>c__DisplayClass24_0<PromisedT>
class CORDL_TYPE Promise_1___c__DisplayClass24_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::RSG::Promise_1<PromisedT>*  __4__this;

/// @brief Field ex, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ex, put=__cordl_internal_set_ex)) ::System::Exception*  ex;

static inline ::RSG::Promise_1___c__DisplayClass24_0<PromisedT>* New_ctor() ;

/// @brief Method <InvokeRejectHandlers>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _InvokeRejectHandlers_b__0(::RSG::RejectHandler  handler) ;

constexpr ::RSG::Promise_1<PromisedT>* const& __cordl_internal_get___4__this() const;

constexpr ::RSG::Promise_1<PromisedT>*& __cordl_internal_get___4__this() ;

constexpr ::System::Exception* const& __cordl_internal_get_ex() const;

constexpr ::System::Exception*& __cordl_internal_get_ex() ;

constexpr void __cordl_internal_set___4__this(::RSG::Promise_1<PromisedT>*  value) ;

constexpr void __cordl_internal_set_ex(::System::Exception*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise_1___c__DisplayClass24_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass24_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise_1___c__DisplayClass24_0(Promise_1___c__DisplayClass24_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass24_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise_1___c__DisplayClass24_0(Promise_1___c__DisplayClass24_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1664};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::RSG::Promise_1<PromisedT>*  _____4__this;

/// @brief Field ex, offset: 0x18, size: 0x8, def value: None
 ::System::Exception*  ___ex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename PromisedT>
// Is value type: false
// CS Name: RSG.Promise`1/<>c__DisplayClass26_0<PromisedT>
class CORDL_TYPE Promise_1___c__DisplayClass26_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::RSG::Promise_1<PromisedT>*  __4__this;

/// @brief Field progress, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) float_t  progress;

static inline ::RSG::Promise_1___c__DisplayClass26_0<PromisedT>* New_ctor() ;

/// @brief Method <InvokeProgressHandlers>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _InvokeProgressHandlers_b__0(::RSG::ProgressHandler  handler) ;

constexpr ::RSG::Promise_1<PromisedT>* const& __cordl_internal_get___4__this() const;

constexpr ::RSG::Promise_1<PromisedT>*& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get_progress() const;

constexpr float_t& __cordl_internal_get_progress() ;

constexpr void __cordl_internal_set___4__this(::RSG::Promise_1<PromisedT>*  value) ;

constexpr void __cordl_internal_set_progress(float_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise_1___c__DisplayClass26_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass26_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise_1___c__DisplayClass26_0(Promise_1___c__DisplayClass26_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass26_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise_1___c__DisplayClass26_0(Promise_1___c__DisplayClass26_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1665};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::RSG::Promise_1<PromisedT>*  _____4__this;

/// @brief Field progress, offset: 0x18, size: 0x4, def value: None
 float_t  ___progress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename PromisedT>
// Is value type: false
// CS Name: RSG.Promise`1/<>c__DisplayClass34_0<PromisedT>
class CORDL_TYPE Promise_1___c__DisplayClass34_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onRejected, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRejected, put=__cordl_internal_set_onRejected)) ::System::Action_1<::System::Exception*>*  onRejected;

/// @brief Field resultPromise, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultPromise, put=__cordl_internal_set_resultPromise)) ::RSG::Promise*  resultPromise;

static inline ::RSG::Promise_1___c__DisplayClass34_0<PromisedT>* New_ctor() ;

/// @brief Method <Catch>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Catch_b__0(PromisedT  _) ;

/// @brief Method <Catch>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Catch_b__1(::System::Exception*  ex) ;

/// @brief Method <Catch>b__2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Catch_b__2(float_t  v) ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get_onRejected() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get_onRejected() ;

constexpr ::RSG::Promise* const& __cordl_internal_get_resultPromise() const;

constexpr ::RSG::Promise*& __cordl_internal_get_resultPromise() ;

constexpr void __cordl_internal_set_onRejected(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_resultPromise(::RSG::Promise*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise_1___c__DisplayClass34_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass34_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise_1___c__DisplayClass34_0(Promise_1___c__DisplayClass34_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass34_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise_1___c__DisplayClass34_0(Promise_1___c__DisplayClass34_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1666};

/// @brief Field resultPromise, offset: 0x10, size: 0x8, def value: None
 ::RSG::Promise*  ___resultPromise;

/// @brief Field onRejected, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  ___onRejected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename PromisedT>
// Is value type: false
// CS Name: RSG.Promise`1/<>c__DisplayClass35_0<PromisedT>
class CORDL_TYPE Promise_1___c__DisplayClass35_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onRejected, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRejected, put=__cordl_internal_set_onRejected)) ::System::Func_2<::System::Exception*,PromisedT>*  onRejected;

/// @brief Field resultPromise, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultPromise, put=__cordl_internal_set_resultPromise)) ::RSG::Promise_1<PromisedT>*  resultPromise;

static inline ::RSG::Promise_1___c__DisplayClass35_0<PromisedT>* New_ctor() ;

/// @brief Method <Catch>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Catch_b__0(PromisedT  v) ;

/// @brief Method <Catch>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Catch_b__1(::System::Exception*  ex) ;

/// @brief Method <Catch>b__2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Catch_b__2(float_t  v) ;

constexpr ::System::Func_2<::System::Exception*,PromisedT>* const& __cordl_internal_get_onRejected() const;

constexpr ::System::Func_2<::System::Exception*,PromisedT>*& __cordl_internal_get_onRejected() ;

constexpr ::RSG::Promise_1<PromisedT>* const& __cordl_internal_get_resultPromise() const;

constexpr ::RSG::Promise_1<PromisedT>*& __cordl_internal_get_resultPromise() ;

constexpr void __cordl_internal_set_onRejected(::System::Func_2<::System::Exception*,PromisedT>*  value) ;

constexpr void __cordl_internal_set_resultPromise(::RSG::Promise_1<PromisedT>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise_1___c__DisplayClass35_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise_1___c__DisplayClass35_0(Promise_1___c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise_1___c__DisplayClass35_0(Promise_1___c__DisplayClass35_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1667};

/// @brief Field resultPromise, offset: 0x10, size: 0x8, def value: None
 ::RSG::Promise_1<PromisedT>*  ___resultPromise;

/// @brief Field onRejected, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<::System::Exception*,PromisedT>*  ___onRejected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename PromisedT,typename ConvertedT>
// Is value type: false
// CS Name: RSG.Promise`1/<>c__DisplayClass42_0`1<PromisedT,ConvertedT>
class CORDL_TYPE Promise_1___c__DisplayClass42_0_1 : public ::System::Object {
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
 __declspec(property(get=__cordl_internal_get_onResolved, put=__cordl_internal_set_onResolved)) ::System::Func_2<PromisedT,::RSG::IPromise_1<ConvertedT>*>*  onResolved;

/// @brief Field resultPromise, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultPromise, put=__cordl_internal_set_resultPromise)) ::RSG::Promise_1<ConvertedT>*  resultPromise;

static inline ::RSG::Promise_1___c__DisplayClass42_0_1<PromisedT,ConvertedT>* New_ctor() ;

/// @brief Method <Then>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Then_b__0(PromisedT  v) ;

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

constexpr ::System::Func_2<PromisedT,::RSG::IPromise_1<ConvertedT>*>* const& __cordl_internal_get_onResolved() const;

constexpr ::System::Func_2<PromisedT,::RSG::IPromise_1<ConvertedT>*>*& __cordl_internal_get_onResolved() ;

constexpr ::RSG::Promise_1<ConvertedT>* const& __cordl_internal_get_resultPromise() const;

constexpr ::RSG::Promise_1<ConvertedT>*& __cordl_internal_get_resultPromise() ;

constexpr void __cordl_internal_set___9__2(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set___9__3(::System::Action_1<ConvertedT>*  value) ;

constexpr void __cordl_internal_set___9__4(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set___9__5(::System::Action_1<ConvertedT>*  value) ;

constexpr void __cordl_internal_set___9__6(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_onRejected(::System::Func_2<::System::Exception*,::RSG::IPromise_1<ConvertedT>*>*  value) ;

constexpr void __cordl_internal_set_onResolved(::System::Func_2<PromisedT,::RSG::IPromise_1<ConvertedT>*>*  value) ;

constexpr void __cordl_internal_set_resultPromise(::RSG::Promise_1<ConvertedT>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise_1___c__DisplayClass42_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass42_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise_1___c__DisplayClass42_0_1(Promise_1___c__DisplayClass42_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass42_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise_1___c__DisplayClass42_0_1(Promise_1___c__DisplayClass42_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1668};

/// @brief Field onResolved, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<PromisedT,::RSG::IPromise_1<ConvertedT>*>*  ___onResolved;

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
// cpp template
template<typename PromisedT>
// Is value type: false
// CS Name: RSG.Promise`1/<>c__DisplayClass43_0<PromisedT>
class CORDL_TYPE Promise_1___c__DisplayClass43_0 : public ::System::Object {
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
 __declspec(property(get=__cordl_internal_get_onResolved, put=__cordl_internal_set_onResolved)) ::System::Func_2<PromisedT,::RSG::IPromise*>*  onResolved;

/// @brief Field resultPromise, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultPromise, put=__cordl_internal_set_resultPromise)) ::RSG::Promise*  resultPromise;

static inline ::RSG::Promise_1___c__DisplayClass43_0<PromisedT>* New_ctor() ;

/// @brief Method <Then>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Then_b__0(PromisedT  v) ;

/// @brief Method <Then>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Then_b__1(::System::Exception*  ex) ;

/// @brief Method <Then>b__2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Then_b__2(float_t  progress) ;

/// @brief Method <Then>b__3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Then_b__3() ;

/// @brief Method <Then>b__4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Then_b__4(::System::Exception*  ex) ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get___9__2() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get___9__2() ;

constexpr ::System::Action* const& __cordl_internal_get___9__3() const;

constexpr ::System::Action*& __cordl_internal_get___9__3() ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get___9__4() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get___9__4() ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get_onRejected() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get_onRejected() ;

constexpr ::System::Func_2<PromisedT,::RSG::IPromise*>* const& __cordl_internal_get_onResolved() const;

constexpr ::System::Func_2<PromisedT,::RSG::IPromise*>*& __cordl_internal_get_onResolved() ;

constexpr ::RSG::Promise* const& __cordl_internal_get_resultPromise() const;

constexpr ::RSG::Promise*& __cordl_internal_get_resultPromise() ;

constexpr void __cordl_internal_set___9__2(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set___9__3(::System::Action*  value) ;

constexpr void __cordl_internal_set___9__4(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_onRejected(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_onResolved(::System::Func_2<PromisedT,::RSG::IPromise*>*  value) ;

constexpr void __cordl_internal_set_resultPromise(::RSG::Promise*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise_1___c__DisplayClass43_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass43_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise_1___c__DisplayClass43_0(Promise_1___c__DisplayClass43_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass43_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise_1___c__DisplayClass43_0(Promise_1___c__DisplayClass43_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1669};

/// @brief Field onResolved, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<PromisedT,::RSG::IPromise*>*  ___onResolved;

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
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename PromisedT>
// Is value type: false
// CS Name: RSG.Promise`1/<>c__DisplayClass44_0<PromisedT>
class CORDL_TYPE Promise_1___c__DisplayClass44_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onRejected, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRejected, put=__cordl_internal_set_onRejected)) ::System::Action_1<::System::Exception*>*  onRejected;

/// @brief Field onResolved, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onResolved, put=__cordl_internal_set_onResolved)) ::System::Action_1<PromisedT>*  onResolved;

/// @brief Field resultPromise, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultPromise, put=__cordl_internal_set_resultPromise)) ::RSG::Promise*  resultPromise;

static inline ::RSG::Promise_1___c__DisplayClass44_0<PromisedT>* New_ctor() ;

/// @brief Method <Then>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Then_b__0(PromisedT  v) ;

/// @brief Method <Then>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Then_b__1(::System::Exception*  ex) ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get_onRejected() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get_onRejected() ;

constexpr ::System::Action_1<PromisedT>* const& __cordl_internal_get_onResolved() const;

constexpr ::System::Action_1<PromisedT>*& __cordl_internal_get_onResolved() ;

constexpr ::RSG::Promise* const& __cordl_internal_get_resultPromise() const;

constexpr ::RSG::Promise*& __cordl_internal_get_resultPromise() ;

constexpr void __cordl_internal_set_onRejected(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_onResolved(::System::Action_1<PromisedT>*  value) ;

constexpr void __cordl_internal_set_resultPromise(::RSG::Promise*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise_1___c__DisplayClass44_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass44_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise_1___c__DisplayClass44_0(Promise_1___c__DisplayClass44_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass44_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise_1___c__DisplayClass44_0(Promise_1___c__DisplayClass44_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1670};

/// @brief Field onResolved, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<PromisedT>*  ___onResolved;

/// @brief Field resultPromise, offset: 0x18, size: 0x8, def value: None
 ::RSG::Promise*  ___resultPromise;

/// @brief Field onRejected, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  ___onRejected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename PromisedT,typename ConvertedT>
// Is value type: false
// CS Name: RSG.Promise`1/<>c__DisplayClass45_0`1<PromisedT,ConvertedT>
class CORDL_TYPE Promise_1___c__DisplayClass45_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field transform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_transform, put=__cordl_internal_set_transform)) ::System::Func_2<PromisedT,ConvertedT>*  transform;

static inline ::RSG::Promise_1___c__DisplayClass45_0_1<PromisedT,ConvertedT>* New_ctor() ;

/// @brief Method <Then>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::RSG::IPromise_1<ConvertedT>* _Then_b__0(PromisedT  value) ;

constexpr ::System::Func_2<PromisedT,ConvertedT>* const& __cordl_internal_get_transform() const;

constexpr ::System::Func_2<PromisedT,ConvertedT>*& __cordl_internal_get_transform() ;

constexpr void __cordl_internal_set_transform(::System::Func_2<PromisedT,ConvertedT>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise_1___c__DisplayClass45_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass45_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise_1___c__DisplayClass45_0_1(Promise_1___c__DisplayClass45_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass45_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise_1___c__DisplayClass45_0_1(Promise_1___c__DisplayClass45_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1671};

/// @brief Field transform, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<PromisedT,ConvertedT>*  ___transform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename PromisedT,typename ConvertedT>
// Is value type: false
// CS Name: RSG.Promise`1/<>c__DisplayClass48_0`1<PromisedT,ConvertedT>
class CORDL_TYPE Promise_1___c__DisplayClass48_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field chain, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_chain, put=__cordl_internal_set_chain)) ::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  chain;

static inline ::RSG::Promise_1___c__DisplayClass48_0_1<PromisedT,ConvertedT>* New_ctor() ;

/// @brief Method <ThenAll>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::RSG::IPromise_1<::System::Collections::Generic::IEnumerable_1<ConvertedT>*>* _ThenAll_b__0(PromisedT  value) ;

constexpr ::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>* const& __cordl_internal_get_chain() const;

constexpr ::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*& __cordl_internal_get_chain() ;

constexpr void __cordl_internal_set_chain(::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise_1___c__DisplayClass48_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass48_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise_1___c__DisplayClass48_0_1(Promise_1___c__DisplayClass48_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass48_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise_1___c__DisplayClass48_0_1(Promise_1___c__DisplayClass48_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1672};

/// @brief Field chain, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  ___chain;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename PromisedT>
// Is value type: false
// CS Name: RSG.Promise`1/<>c__DisplayClass49_0<PromisedT>
class CORDL_TYPE Promise_1___c__DisplayClass49_0 : public ::System::Object {
public:
// Declarations
/// @brief Field chain, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_chain, put=__cordl_internal_set_chain)) ::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  chain;

static inline ::RSG::Promise_1___c__DisplayClass49_0<PromisedT>* New_ctor() ;

/// @brief Method <ThenAll>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::RSG::IPromise* _ThenAll_b__0(PromisedT  value) ;

constexpr ::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>* const& __cordl_internal_get_chain() const;

constexpr ::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*& __cordl_internal_get_chain() ;

constexpr void __cordl_internal_set_chain(::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise_1___c__DisplayClass49_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass49_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise_1___c__DisplayClass49_0(Promise_1___c__DisplayClass49_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass49_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise_1___c__DisplayClass49_0(Promise_1___c__DisplayClass49_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1673};

/// @brief Field chain, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  ___chain;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename PromisedT>
// Is value type: false
// CS Name: RSG.Promise`1/<>c__DisplayClass51_0<PromisedT>
class CORDL_TYPE Promise_1___c__DisplayClass51_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__3, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__3, put=__cordl_internal_set___9__3)) ::System::Action_1<::System::Exception*>*  __9__3;

/// @brief Field progress, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) ::ArrayW<float_t,::Array<float_t>*>  progress;

/// @brief Field remainingCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_remainingCount, put=__cordl_internal_set_remainingCount)) int32_t  remainingCount;

/// @brief Field resultPromise, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultPromise, put=__cordl_internal_set_resultPromise)) ::RSG::Promise_1<::System::Collections::Generic::IEnumerable_1<PromisedT>*>*  resultPromise;

/// @brief Field results, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_results, put=__cordl_internal_set_results)) ::ArrayW<PromisedT,::Array<PromisedT>*>  results;

static inline ::RSG::Promise_1___c__DisplayClass51_0<PromisedT>* New_ctor() ;

/// @brief Method <All>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _All_b__0(::RSG::IPromise_1<PromisedT>*  promise, int32_t  index) ;

/// @brief Method <All>b__3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _All_b__3(::System::Exception*  ex) ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get___9__3() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get___9__3() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_progress() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_progress() ;

constexpr int32_t const& __cordl_internal_get_remainingCount() const;

constexpr int32_t& __cordl_internal_get_remainingCount() ;

constexpr ::RSG::Promise_1<::System::Collections::Generic::IEnumerable_1<PromisedT>*>* const& __cordl_internal_get_resultPromise() const;

constexpr ::RSG::Promise_1<::System::Collections::Generic::IEnumerable_1<PromisedT>*>*& __cordl_internal_get_resultPromise() ;

constexpr ::ArrayW<PromisedT,::Array<PromisedT>*> const& __cordl_internal_get_results() const;

constexpr ::ArrayW<PromisedT,::Array<PromisedT>*>& __cordl_internal_get_results() ;

constexpr void __cordl_internal_set___9__3(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_progress(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set_remainingCount(int32_t  value) ;

constexpr void __cordl_internal_set_resultPromise(::RSG::Promise_1<::System::Collections::Generic::IEnumerable_1<PromisedT>*>*  value) ;

constexpr void __cordl_internal_set_results(::ArrayW<PromisedT,::Array<PromisedT>*>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise_1___c__DisplayClass51_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass51_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise_1___c__DisplayClass51_0(Promise_1___c__DisplayClass51_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass51_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise_1___c__DisplayClass51_0(Promise_1___c__DisplayClass51_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1674};

/// @brief Field progress, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___progress;

/// @brief Field resultPromise, offset: 0x18, size: 0x8, def value: None
 ::RSG::Promise_1<::System::Collections::Generic::IEnumerable_1<PromisedT>*>*  ___resultPromise;

/// @brief Field results, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<PromisedT,::Array<PromisedT>*>  ___results;

/// @brief Field remainingCount, offset: 0x28, size: 0x4, def value: None
 int32_t  ___remainingCount;

/// @brief Field <>9__3, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  _____9__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename PromisedT>
// Is value type: false
// CS Name: RSG.Promise`1/<>c__DisplayClass51_1<PromisedT>
class CORDL_TYPE Promise_1___c__DisplayClass51_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::RSG::Promise_1___c__DisplayClass51_0<PromisedT>*  CS$__8__locals1;

/// @brief Field index, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

static inline ::RSG::Promise_1___c__DisplayClass51_1<PromisedT>* New_ctor() ;

/// @brief Method <All>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _All_b__1(float_t  v) ;

/// @brief Method <All>b__2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _All_b__2(PromisedT  result) ;

constexpr ::RSG::Promise_1___c__DisplayClass51_0<PromisedT>* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::RSG::Promise_1___c__DisplayClass51_0<PromisedT>*& __cordl_internal_get_CS$__8__locals1() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::RSG::Promise_1___c__DisplayClass51_0<PromisedT>*  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise_1___c__DisplayClass51_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass51_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise_1___c__DisplayClass51_1(Promise_1___c__DisplayClass51_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass51_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise_1___c__DisplayClass51_1(Promise_1___c__DisplayClass51_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1675};

/// @brief Field index, offset: 0x10, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::RSG::Promise_1___c__DisplayClass51_0<PromisedT>*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename PromisedT,typename ConvertedT>
// Is value type: false
// CS Name: RSG.Promise`1/<>c__DisplayClass52_0`1<PromisedT,ConvertedT>
class CORDL_TYPE Promise_1___c__DisplayClass52_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field chain, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_chain, put=__cordl_internal_set_chain)) ::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  chain;

static inline ::RSG::Promise_1___c__DisplayClass52_0_1<PromisedT,ConvertedT>* New_ctor() ;

/// @brief Method <ThenRace>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::RSG::IPromise_1<ConvertedT>* _ThenRace_b__0(PromisedT  value) ;

constexpr ::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>* const& __cordl_internal_get_chain() const;

constexpr ::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*& __cordl_internal_get_chain() ;

constexpr void __cordl_internal_set_chain(::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise_1___c__DisplayClass52_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass52_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise_1___c__DisplayClass52_0_1(Promise_1___c__DisplayClass52_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass52_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise_1___c__DisplayClass52_0_1(Promise_1___c__DisplayClass52_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1676};

/// @brief Field chain, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  ___chain;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename PromisedT>
// Is value type: false
// CS Name: RSG.Promise`1/<>c__DisplayClass53_0<PromisedT>
class CORDL_TYPE Promise_1___c__DisplayClass53_0 : public ::System::Object {
public:
// Declarations
/// @brief Field chain, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_chain, put=__cordl_internal_set_chain)) ::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  chain;

static inline ::RSG::Promise_1___c__DisplayClass53_0<PromisedT>* New_ctor() ;

/// @brief Method <ThenRace>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::RSG::IPromise* _ThenRace_b__0(PromisedT  value) ;

constexpr ::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>* const& __cordl_internal_get_chain() const;

constexpr ::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*& __cordl_internal_get_chain() ;

constexpr void __cordl_internal_set_chain(::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise_1___c__DisplayClass53_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass53_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise_1___c__DisplayClass53_0(Promise_1___c__DisplayClass53_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass53_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise_1___c__DisplayClass53_0(Promise_1___c__DisplayClass53_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1677};

/// @brief Field chain, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  ___chain;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename PromisedT>
// Is value type: false
// CS Name: RSG.Promise`1/<>c__DisplayClass55_0<PromisedT>
class CORDL_TYPE Promise_1___c__DisplayClass55_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__2, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__2, put=__cordl_internal_set___9__2)) ::System::Action_1<PromisedT>*  __9__2;

/// @brief Field <>9__3, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__3, put=__cordl_internal_set___9__3)) ::System::Action_1<::System::Exception*>*  __9__3;

/// @brief Field progress, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) ::ArrayW<float_t,::Array<float_t>*>  progress;

/// @brief Field resultPromise, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultPromise, put=__cordl_internal_set_resultPromise)) ::RSG::Promise_1<PromisedT>*  resultPromise;

static inline ::RSG::Promise_1___c__DisplayClass55_0<PromisedT>* New_ctor() ;

/// @brief Method <Race>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Race_b__0(::RSG::IPromise_1<PromisedT>*  promise, int32_t  index) ;

/// @brief Method <Race>b__2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Race_b__2(PromisedT  result) ;

/// @brief Method <Race>b__3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Race_b__3(::System::Exception*  ex) ;

constexpr ::System::Action_1<PromisedT>* const& __cordl_internal_get___9__2() const;

constexpr ::System::Action_1<PromisedT>*& __cordl_internal_get___9__2() ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get___9__3() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get___9__3() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_progress() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_progress() ;

constexpr ::RSG::Promise_1<PromisedT>* const& __cordl_internal_get_resultPromise() const;

constexpr ::RSG::Promise_1<PromisedT>*& __cordl_internal_get_resultPromise() ;

constexpr void __cordl_internal_set___9__2(::System::Action_1<PromisedT>*  value) ;

constexpr void __cordl_internal_set___9__3(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_progress(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set_resultPromise(::RSG::Promise_1<PromisedT>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise_1___c__DisplayClass55_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass55_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise_1___c__DisplayClass55_0(Promise_1___c__DisplayClass55_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass55_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise_1___c__DisplayClass55_0(Promise_1___c__DisplayClass55_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1678};

/// @brief Field resultPromise, offset: 0x10, size: 0x8, def value: None
 ::RSG::Promise_1<PromisedT>*  ___resultPromise;

/// @brief Field progress, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___progress;

/// @brief Field <>9__2, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<PromisedT>*  _____9__2;

/// @brief Field <>9__3, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  _____9__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename PromisedT>
// Is value type: false
// CS Name: RSG.Promise`1/<>c__DisplayClass55_1<PromisedT>
class CORDL_TYPE Promise_1___c__DisplayClass55_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::RSG::Promise_1___c__DisplayClass55_0<PromisedT>*  CS$__8__locals1;

/// @brief Field index, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

static inline ::RSG::Promise_1___c__DisplayClass55_1<PromisedT>* New_ctor() ;

/// @brief Method <Race>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Race_b__1(float_t  v) ;

constexpr ::RSG::Promise_1___c__DisplayClass55_0<PromisedT>* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::RSG::Promise_1___c__DisplayClass55_0<PromisedT>*& __cordl_internal_get_CS$__8__locals1() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::RSG::Promise_1___c__DisplayClass55_0<PromisedT>*  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise_1___c__DisplayClass55_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass55_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise_1___c__DisplayClass55_1(Promise_1___c__DisplayClass55_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass55_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise_1___c__DisplayClass55_1(Promise_1___c__DisplayClass55_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1679};

/// @brief Field index, offset: 0x10, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::RSG::Promise_1___c__DisplayClass55_0<PromisedT>*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename PromisedT>
// Is value type: false
// CS Name: RSG.Promise`1/<>c__DisplayClass58_0<PromisedT>
class CORDL_TYPE Promise_1___c__DisplayClass58_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onComplete, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onComplete, put=__cordl_internal_set_onComplete)) ::System::Action*  onComplete;

/// @brief Field promise, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_promise, put=__cordl_internal_set_promise)) ::RSG::Promise_1<PromisedT>*  promise;

static inline ::RSG::Promise_1___c__DisplayClass58_0<PromisedT>* New_ctor() ;

/// @brief Method <Finally>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Finally_b__0(PromisedT  x) ;

/// @brief Method <Finally>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Finally_b__1(::System::Exception*  e) ;

/// @brief Method <Finally>b__2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline PromisedT _Finally_b__2(PromisedT  v) ;

constexpr ::System::Action* const& __cordl_internal_get_onComplete() const;

constexpr ::System::Action*& __cordl_internal_get_onComplete() ;

constexpr ::RSG::Promise_1<PromisedT>* const& __cordl_internal_get_promise() const;

constexpr ::RSG::Promise_1<PromisedT>*& __cordl_internal_get_promise() ;

constexpr void __cordl_internal_set_onComplete(::System::Action*  value) ;

constexpr void __cordl_internal_set_promise(::RSG::Promise_1<PromisedT>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise_1___c__DisplayClass58_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass58_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise_1___c__DisplayClass58_0(Promise_1___c__DisplayClass58_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass58_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise_1___c__DisplayClass58_0(Promise_1___c__DisplayClass58_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1680};

/// @brief Field promise, offset: 0x10, size: 0x8, def value: None
 ::RSG::Promise_1<PromisedT>*  ___promise;

/// @brief Field onComplete, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___onComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename PromisedT>
// Is value type: false
// CS Name: RSG.Promise`1/<>c__DisplayClass59_0<PromisedT>
class CORDL_TYPE Promise_1___c__DisplayClass59_0 : public ::System::Object {
public:
// Declarations
/// @brief Field promise, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_promise, put=__cordl_internal_set_promise)) ::RSG::Promise*  promise;

static inline ::RSG::Promise_1___c__DisplayClass59_0<PromisedT>* New_ctor() ;

/// @brief Method <ContinueWith>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ContinueWith_b__0(PromisedT  x) ;

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
constexpr Promise_1___c__DisplayClass59_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass59_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise_1___c__DisplayClass59_0(Promise_1___c__DisplayClass59_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass59_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise_1___c__DisplayClass59_0(Promise_1___c__DisplayClass59_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1681};

/// @brief Field promise, offset: 0x10, size: 0x8, def value: None
 ::RSG::Promise*  ___promise;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename PromisedT,typename ConvertedT>
// Is value type: false
// CS Name: RSG.Promise`1/<>c__DisplayClass60_0`1<PromisedT,ConvertedT>
class CORDL_TYPE Promise_1___c__DisplayClass60_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field promise, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_promise, put=__cordl_internal_set_promise)) ::RSG::Promise*  promise;

static inline ::RSG::Promise_1___c__DisplayClass60_0_1<PromisedT,ConvertedT>* New_ctor() ;

/// @brief Method <ContinueWith>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ContinueWith_b__0(PromisedT  x) ;

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
constexpr Promise_1___c__DisplayClass60_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass60_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise_1___c__DisplayClass60_0_1(Promise_1___c__DisplayClass60_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise_1___c__DisplayClass60_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise_1___c__DisplayClass60_0_1(Promise_1___c__DisplayClass60_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1682};

/// @brief Field promise, offset: 0x10, size: 0x8, def value: None
 ::RSG::Promise*  ___promise;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies RSG.IPendingPromise`1<PromisedT>, RSG.IPromiseInfo, RSG.IPromise`1<PromisedT>, RSG.IRejectable, RSG.PromiseState, System.Object
namespace RSG {
// cpp template
template<typename PromisedT>
// Is value type: false
// CS Name: RSG.Promise`1<PromisedT>
class CORDL_TYPE Promise_1 : public ::System::Object {
public:
// Declarations
using __c__DisplayClass24_0 = ::RSG::Promise_1___c__DisplayClass24_0<PromisedT>;

using __c__DisplayClass26_0 = ::RSG::Promise_1___c__DisplayClass26_0<PromisedT>;

using __c__DisplayClass34_0 = ::RSG::Promise_1___c__DisplayClass34_0<PromisedT>;

using __c__DisplayClass35_0 = ::RSG::Promise_1___c__DisplayClass35_0<PromisedT>;

template<typename ConvertedT>
using __c__DisplayClass42_0_1 = ::RSG::Promise_1___c__DisplayClass42_0_1<PromisedT, ConvertedT>;

using __c__DisplayClass43_0 = ::RSG::Promise_1___c__DisplayClass43_0<PromisedT>;

using __c__DisplayClass44_0 = ::RSG::Promise_1___c__DisplayClass44_0<PromisedT>;

template<typename ConvertedT>
using __c__DisplayClass45_0_1 = ::RSG::Promise_1___c__DisplayClass45_0_1<PromisedT, ConvertedT>;

template<typename ConvertedT>
using __c__DisplayClass48_0_1 = ::RSG::Promise_1___c__DisplayClass48_0_1<PromisedT, ConvertedT>;

using __c__DisplayClass49_0 = ::RSG::Promise_1___c__DisplayClass49_0<PromisedT>;

using __c__DisplayClass51_0 = ::RSG::Promise_1___c__DisplayClass51_0<PromisedT>;

using __c__DisplayClass51_1 = ::RSG::Promise_1___c__DisplayClass51_1<PromisedT>;

template<typename ConvertedT>
using __c__DisplayClass52_0_1 = ::RSG::Promise_1___c__DisplayClass52_0_1<PromisedT, ConvertedT>;

using __c__DisplayClass53_0 = ::RSG::Promise_1___c__DisplayClass53_0<PromisedT>;

using __c__DisplayClass55_0 = ::RSG::Promise_1___c__DisplayClass55_0<PromisedT>;

using __c__DisplayClass55_1 = ::RSG::Promise_1___c__DisplayClass55_1<PromisedT>;

using __c__DisplayClass58_0 = ::RSG::Promise_1___c__DisplayClass58_0<PromisedT>;

using __c__DisplayClass59_0 = ::RSG::Promise_1___c__DisplayClass59_0<PromisedT>;

template<typename ConvertedT>
using __c__DisplayClass60_0_1 = ::RSG::Promise_1___c__DisplayClass60_0_1<PromisedT, ConvertedT>;

 __declspec(property(get=get_CurState, put=set_CurState)) ::RSG::PromiseState  CurState;

 __declspec(property(get=get_Id)) int32_t  Id;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

/// @brief Field <CurState>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurState_k__BackingField, put=__cordl_internal_set__CurState_k__BackingField)) ::RSG::PromiseState  _CurState_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Field id, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) int32_t  id;

/// @brief Field progressHandlers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressHandlers, put=__cordl_internal_set_progressHandlers)) ::System::Collections::Generic::List_1<::RSG::ProgressHandler>*  progressHandlers;

/// @brief Field rejectHandlers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rejectHandlers, put=__cordl_internal_set_rejectHandlers)) ::System::Collections::Generic::List_1<::RSG::RejectHandler>*  rejectHandlers;

/// @brief Field rejectionException, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_rejectionException, put=__cordl_internal_set_rejectionException)) ::System::Exception*  rejectionException;

/// @brief Field resolveCallbacks, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_resolveCallbacks, put=__cordl_internal_set_resolveCallbacks)) ::System::Collections::Generic::List_1<::System::Action_1<PromisedT>*>*  resolveCallbacks;

/// @brief Field resolveRejectables, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_resolveRejectables, put=__cordl_internal_set_resolveRejectables)) ::System::Collections::Generic::List_1<::RSG::IRejectable*>*  resolveRejectables;

/// @brief Field resolveValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_resolveValue, put=__cordl_internal_set_resolveValue)) PromisedT  resolveValue;

/// @brief Convert operator to "::RSG::IPendingPromise_1<PromisedT>"
constexpr operator  ::RSG::IPendingPromise_1<PromisedT>*() noexcept;

/// @brief Convert operator to "::RSG::IPromiseInfo"
constexpr operator  ::RSG::IPromiseInfo*() noexcept;

/// @brief Convert operator to "::RSG::IPromise_1<PromisedT>"
constexpr operator  ::RSG::IPromise_1<PromisedT>*() noexcept;

/// @brief Convert operator to "::RSG::IRejectable"
constexpr operator  ::RSG::IRejectable*() noexcept;

/// @brief Method ActionHandlers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ActionHandlers(::RSG::IRejectable*  resultPromise, ::System::Action_1<PromisedT>*  resolveHandler, ::System::Action_1<::System::Exception*>*  rejectHandler) ;

/// @brief Method AddProgressHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddProgressHandler(::System::Action_1<float_t>*  onProgress, ::RSG::IRejectable*  rejectable) ;

/// @brief Method AddRejectHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddRejectHandler(::System::Action_1<::System::Exception*>*  onRejected, ::RSG::IRejectable*  rejectable) ;

/// @brief Method AddResolveHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddResolveHandler(::System::Action_1<PromisedT>*  onResolved, ::RSG::IRejectable*  rejectable) ;

/// @brief Method All, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::RSG::IPromise_1<::System::Collections::Generic::IEnumerable_1<PromisedT>*>* All(::ArrayW<::RSG::IPromise_1<PromisedT>*,::Array<::RSG::IPromise_1<PromisedT>*>*>  promises) ;

/// @brief Method All, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::RSG::IPromise_1<::System::Collections::Generic::IEnumerable_1<PromisedT>*>* All(::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<PromisedT>*>*  promises) ;

/// @brief Method Catch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::RSG::IPromise* Catch(::System::Action_1<::System::Exception*>*  onRejected) ;

/// @brief Method Catch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::RSG::IPromise_1<PromisedT>* Catch(::System::Func_2<::System::Exception*,PromisedT>*  onRejected) ;

/// @brief Method ClearHandlers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ClearHandlers() ;

/// @brief Method ContinueWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::RSG::IPromise* ContinueWith(::System::Func_1<::RSG::IPromise*>*  onComplete) ;

/// @brief Method ContinueWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* ContinueWith(::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*  onComplete) ;

/// @brief Method Done, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Done() ;

/// @brief Method Done, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Done(::System::Action_1<PromisedT>*  onResolved) ;

/// @brief Method Done, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Done(::System::Action_1<PromisedT>*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected) ;

/// @brief Method Finally, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::RSG::IPromise_1<PromisedT>* Finally(::System::Action*  onComplete) ;

/// @brief Method InvokeHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void InvokeHandler(::System::Action_1<T>*  callback, ::RSG::IRejectable*  rejectable, T  value) ;

/// @brief Method InvokeProgressHandlers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InvokeProgressHandlers(float_t  progress) ;

/// @brief Method InvokeRejectHandlers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InvokeRejectHandlers(::System::Exception*  ex) ;

/// @brief Method InvokeResolveHandlers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InvokeResolveHandlers(PromisedT  value) ;

static inline ::RSG::Promise_1<PromisedT>* New_ctor() ;

static inline ::RSG::Promise_1<PromisedT>* New_ctor(::System::Action_2<::System::Action_1<PromisedT>*,::System::Action_1<::System::Exception*>*>*  resolver) ;

/// @brief Method Progress, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::RSG::IPromise_1<PromisedT>* Progress(::System::Action_1<float_t>*  onProgress) ;

/// @brief Method ProgressHandlers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ProgressHandlers(::RSG::IRejectable*  resultPromise, ::System::Action_1<float_t>*  progressHandler) ;

/// @brief Method Race, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::RSG::IPromise_1<PromisedT>* Race(::ArrayW<::RSG::IPromise_1<PromisedT>*,::Array<::RSG::IPromise_1<PromisedT>*>*>  promises) ;

/// @brief Method Race, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::RSG::IPromise_1<PromisedT>* Race(::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<PromisedT>*>*  promises) ;

/// @brief Method Reject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Reject(::System::Exception*  ex) ;

/// @brief Method Rejected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::RSG::IPromise_1<PromisedT>* Rejected(::System::Exception*  ex) ;

/// @brief Method ReportProgress, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void ReportProgress(float_t  progress) ;

/// @brief Method Resolve, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Resolve(PromisedT  value) ;

/// @brief Method Resolved, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::RSG::IPromise_1<PromisedT>* Resolved(PromisedT  promisedValue) ;

/// @brief Method Then, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::RSG::IPromise* Then(::System::Action_1<PromisedT>*  onResolved) ;

/// @brief Method Then, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::RSG::IPromise* Then(::System::Action_1<PromisedT>*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected) ;

/// @brief Method Then, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::RSG::IPromise* Then(::System::Action_1<PromisedT>*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected, ::System::Action_1<float_t>*  onProgress) ;

/// @brief Method Then, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::RSG::IPromise* Then(::System::Func_2<PromisedT,::RSG::IPromise*>*  onResolved) ;

/// @brief Method Then, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::RSG::IPromise* Then(::System::Func_2<PromisedT,::RSG::IPromise*>*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected) ;

/// @brief Method Then, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::RSG::IPromise* Then(::System::Func_2<PromisedT,::RSG::IPromise*>*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected, ::System::Action_1<float_t>*  onProgress) ;

/// @brief Method Then, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* Then(::System::Func_2<PromisedT,::RSG::IPromise_1<ConvertedT>*>*  onResolved) ;

/// @brief Method Then, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* Then(::System::Func_2<PromisedT,::RSG::IPromise_1<ConvertedT>*>*  onResolved, ::System::Func_2<::System::Exception*,::RSG::IPromise_1<ConvertedT>*>*  onRejected) ;

/// @brief Method Then, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* Then(::System::Func_2<PromisedT,::RSG::IPromise_1<ConvertedT>*>*  onResolved, ::System::Func_2<::System::Exception*,::RSG::IPromise_1<ConvertedT>*>*  onRejected, ::System::Action_1<float_t>*  onProgress) ;

/// @brief Method Then, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* Then(::System::Func_2<PromisedT,ConvertedT>*  transform) ;

/// @brief Method ThenAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::RSG::IPromise* ThenAll(::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  chain) ;

/// @brief Method ThenAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename ConvertedT>
inline ::RSG::IPromise_1<::System::Collections::Generic::IEnumerable_1<ConvertedT>*>* ThenAll(::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  chain) ;

/// @brief Method ThenRace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::RSG::IPromise* ThenRace(::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  chain) ;

/// @brief Method ThenRace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* ThenRace(::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  chain) ;

/// @brief Method WithName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::RSG::IPromise_1<PromisedT>* WithName(::StringW  name) ;

/// @brief Method <Done>b__30_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Done_b__30_0(::System::Exception*  ex) ;

/// @brief Method <Done>b__31_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Done_b__31_0(::System::Exception*  ex) ;

/// @brief Method <Done>b__32_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Done_b__32_0(::System::Exception*  ex) ;

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

constexpr ::System::Collections::Generic::List_1<::System::Action_1<PromisedT>*>* const& __cordl_internal_get_resolveCallbacks() const;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<PromisedT>*>*& __cordl_internal_get_resolveCallbacks() ;

constexpr ::System::Collections::Generic::List_1<::RSG::IRejectable*>* const& __cordl_internal_get_resolveRejectables() const;

constexpr ::System::Collections::Generic::List_1<::RSG::IRejectable*>*& __cordl_internal_get_resolveRejectables() ;

constexpr PromisedT const& __cordl_internal_get_resolveValue() const;

constexpr PromisedT& __cordl_internal_get_resolveValue() ;

constexpr void __cordl_internal_set__CurState_k__BackingField(::RSG::PromiseState  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_id(int32_t  value) ;

constexpr void __cordl_internal_set_progressHandlers(::System::Collections::Generic::List_1<::RSG::ProgressHandler>*  value) ;

constexpr void __cordl_internal_set_rejectHandlers(::System::Collections::Generic::List_1<::RSG::RejectHandler>*  value) ;

constexpr void __cordl_internal_set_rejectionException(::System::Exception*  value) ;

constexpr void __cordl_internal_set_resolveCallbacks(::System::Collections::Generic::List_1<::System::Action_1<PromisedT>*>*  value) ;

constexpr void __cordl_internal_set_resolveRejectables(::System::Collections::Generic::List_1<::RSG::IRejectable*>*  value) ;

constexpr void __cordl_internal_set_resolveValue(PromisedT  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Action_2<::System::Action_1<PromisedT>*,::System::Action_1<::System::Exception*>*>*  resolver) ;

/// @brief Method get_CurState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::RSG::PromiseState get_CurState() ;

/// @brief Method get_Id, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Id() ;

/// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::StringW get_Name() ;

/// @brief Convert to "::RSG::IPendingPromise_1<PromisedT>"
constexpr ::RSG::IPendingPromise_1<PromisedT>* i___RSG__IPendingPromise_1_PromisedT_() noexcept;

/// @brief Convert to "::RSG::IPromiseInfo"
constexpr ::RSG::IPromiseInfo* i___RSG__IPromiseInfo() noexcept;

/// @brief Convert to "::RSG::IPromise_1<PromisedT>"
constexpr ::RSG::IPromise_1<PromisedT>* i___RSG__IPromise_1_PromisedT_() noexcept;

/// @brief Convert to "::RSG::IRejectable"
constexpr ::RSG::IRejectable* i___RSG__IRejectable() noexcept;

/// @brief Method set_CurState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_CurState(::RSG::PromiseState  value) ;

/// @brief Method set_Name, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Promise_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Promise_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Promise_1(Promise_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Promise_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Promise_1(Promise_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1683};

/// @brief Field rejectionException, offset: 0x10, size: 0x8, def value: None
 ::System::Exception*  ___rejectionException;

/// @brief Field resolveValue, offset: 0x18, size: 0x8, def value: None
 PromisedT  ___resolveValue;

/// @brief Field rejectHandlers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::RSG::RejectHandler>*  ___rejectHandlers;

/// @brief Field progressHandlers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::RSG::ProgressHandler>*  ___progressHandlers;

/// @brief Field resolveCallbacks, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Action_1<PromisedT>*>*  ___resolveCallbacks;

/// @brief Field resolveRejectables, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::RSG::IRejectable*>*  ___resolveRejectables;

/// @brief Field id, offset: 0x40, size: 0x4, def value: None
 int32_t  ___id;

/// @brief Field <Name>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// @brief Field <CurState>k__BackingField, offset: 0x50, size: 0x4, def value: None
 ::RSG::PromiseState  ____CurState_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise_1, "RSG", "Promise`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise_1___c__DisplayClass24_0, "RSG", "Promise`1/<>c__DisplayClass24_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise_1___c__DisplayClass26_0, "RSG", "Promise`1/<>c__DisplayClass26_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise_1___c__DisplayClass34_0, "RSG", "Promise`1/<>c__DisplayClass34_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise_1___c__DisplayClass35_0, "RSG", "Promise`1/<>c__DisplayClass35_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise_1___c__DisplayClass42_0_1, "RSG", "Promise`1/<>c__DisplayClass42_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise_1___c__DisplayClass43_0, "RSG", "Promise`1/<>c__DisplayClass43_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise_1___c__DisplayClass44_0, "RSG", "Promise`1/<>c__DisplayClass44_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise_1___c__DisplayClass45_0_1, "RSG", "Promise`1/<>c__DisplayClass45_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise_1___c__DisplayClass48_0_1, "RSG", "Promise`1/<>c__DisplayClass48_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise_1___c__DisplayClass49_0, "RSG", "Promise`1/<>c__DisplayClass49_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise_1___c__DisplayClass51_0, "RSG", "Promise`1/<>c__DisplayClass51_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise_1___c__DisplayClass51_1, "RSG", "Promise`1/<>c__DisplayClass51_1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise_1___c__DisplayClass52_0_1, "RSG", "Promise`1/<>c__DisplayClass52_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise_1___c__DisplayClass53_0, "RSG", "Promise`1/<>c__DisplayClass53_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise_1___c__DisplayClass55_0, "RSG", "Promise`1/<>c__DisplayClass55_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise_1___c__DisplayClass55_1, "RSG", "Promise`1/<>c__DisplayClass55_1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise_1___c__DisplayClass58_0, "RSG", "Promise`1/<>c__DisplayClass58_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise_1___c__DisplayClass59_0, "RSG", "Promise`1/<>c__DisplayClass59_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promise_1___c__DisplayClass60_0_1, "RSG", "Promise`1/<>c__DisplayClass60_0`1");
