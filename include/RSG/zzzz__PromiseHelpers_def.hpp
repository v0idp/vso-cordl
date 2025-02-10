#pragma once
// IWYU pragma private; include "RSG/PromiseHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PromiseHelpers)
namespace RSG {
template<typename PromisedT>
class IPromise_1;
}
namespace RSG {
template<typename T1,typename T2,typename T3>
class PromiseHelpers___c__1_3;
}
namespace RSG {
template<typename T1,typename T2,typename T3,typename T4>
class PromiseHelpers___c__2_4;
}
namespace RSG {
template<typename T1,typename T2>
class PromiseHelpers___c__DisplayClass0_0_2;
}
namespace RSG {
template<typename PromisedT>
class Promise_1;
}
namespace RSG {
template<typename T1,typename T2>
class Tuple_2;
}
namespace RSG {
template<typename T1,typename T2,typename T3>
class Tuple_3;
}
namespace RSG {
template<typename T1,typename T2,typename T3,typename T4>
class Tuple_4;
}
namespace System {
class Exception;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace RSG {
class PromiseHelpers;
}
namespace RSG {
template<typename T1,typename T2,typename T3>
class PromiseHelpers___c__1_3;
}
namespace RSG {
template<typename T1,typename T2,typename T3,typename T4>
class PromiseHelpers___c__2_4;
}
namespace RSG {
template<typename T1,typename T2>
class PromiseHelpers___c__DisplayClass0_0_2;
}
// Write type traits
MARK_REF_PTR_T(::RSG::PromiseHelpers);
MARK_GEN_REF_PTR_T(::RSG::PromiseHelpers___c__1_3);
MARK_GEN_REF_PTR_T(::RSG::PromiseHelpers___c__2_4);
MARK_GEN_REF_PTR_T(::RSG::PromiseHelpers___c__DisplayClass0_0_2);
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename T1,typename T2,typename T3>
// Is value type: false
// CS Name: RSG.PromiseHelpers/<>c__1`3<T1,T2,T3>
class CORDL_TYPE PromiseHelpers___c__1_3 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::RSG::PromiseHelpers___c__1_3<T1,T2,T3>*  __9;

/// @brief Field <>9__1_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__1_0, put=setStaticF___9__1_0)) ::System::Func_2<::RSG::Tuple_2<::RSG::Tuple_2<T1,T2>*,T3>*,::RSG::Tuple_3<T1,T2,T3>*>*  __9__1_0;

static inline ::RSG::PromiseHelpers___c__1_3<T1,T2,T3>* New_ctor() ;

/// @brief Method <All>b__1_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::RSG::Tuple_3<T1,T2,T3>* _All_b__1_0(::RSG::Tuple_2<::RSG::Tuple_2<T1,T2>*,T3>*  vals) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::RSG::PromiseHelpers___c__1_3<T1,T2,T3>* getStaticF___9() ;

static inline ::System::Func_2<::RSG::Tuple_2<::RSG::Tuple_2<T1,T2>*,T3>*,::RSG::Tuple_3<T1,T2,T3>*>* getStaticF___9__1_0() ;

static inline void setStaticF___9(::RSG::PromiseHelpers___c__1_3<T1,T2,T3>*  value) ;

static inline void setStaticF___9__1_0(::System::Func_2<::RSG::Tuple_2<::RSG::Tuple_2<T1,T2>*,T3>*,::RSG::Tuple_3<T1,T2,T3>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PromiseHelpers___c__1_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PromiseHelpers___c__1_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PromiseHelpers___c__1_3(PromiseHelpers___c__1_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PromiseHelpers___c__1_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PromiseHelpers___c__1_3(PromiseHelpers___c__1_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1684};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename T1,typename T2,typename T3,typename T4>
// Is value type: false
// CS Name: RSG.PromiseHelpers/<>c__2`4<T1,T2,T3,T4>
class CORDL_TYPE PromiseHelpers___c__2_4 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::RSG::PromiseHelpers___c__2_4<T1,T2,T3,T4>*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Func_2<::RSG::Tuple_2<::RSG::Tuple_2<T1,T2>*,::RSG::Tuple_2<T3,T4>*>*,::RSG::Tuple_4<T1,T2,T3,T4>*>*  __9__2_0;

static inline ::RSG::PromiseHelpers___c__2_4<T1,T2,T3,T4>* New_ctor() ;

/// @brief Method <All>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::RSG::Tuple_4<T1,T2,T3,T4>* _All_b__2_0(::RSG::Tuple_2<::RSG::Tuple_2<T1,T2>*,::RSG::Tuple_2<T3,T4>*>*  vals) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::RSG::PromiseHelpers___c__2_4<T1,T2,T3,T4>* getStaticF___9() ;

static inline ::System::Func_2<::RSG::Tuple_2<::RSG::Tuple_2<T1,T2>*,::RSG::Tuple_2<T3,T4>*>*,::RSG::Tuple_4<T1,T2,T3,T4>*>* getStaticF___9__2_0() ;

static inline void setStaticF___9(::RSG::PromiseHelpers___c__2_4<T1,T2,T3,T4>*  value) ;

static inline void setStaticF___9__2_0(::System::Func_2<::RSG::Tuple_2<::RSG::Tuple_2<T1,T2>*,::RSG::Tuple_2<T3,T4>*>*,::RSG::Tuple_4<T1,T2,T3,T4>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PromiseHelpers___c__2_4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PromiseHelpers___c__2_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PromiseHelpers___c__2_4(PromiseHelpers___c__2_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PromiseHelpers___c__2_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PromiseHelpers___c__2_4(PromiseHelpers___c__2_4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1685};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename T1,typename T2>
// Is value type: false
// CS Name: RSG.PromiseHelpers/<>c__DisplayClass0_0`2<T1,T2>
class CORDL_TYPE PromiseHelpers___c__DisplayClass0_0_2 : public ::System::Object {
public:
// Declarations
/// @brief Field alreadyRejected, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_alreadyRejected, put=__cordl_internal_set_alreadyRejected)) bool  alreadyRejected;

/// @brief Field numUnresolved, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_numUnresolved, put=__cordl_internal_set_numUnresolved)) int32_t  numUnresolved;

/// @brief Field promise, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_promise, put=__cordl_internal_set_promise)) ::RSG::Promise_1<::RSG::Tuple_2<T1,T2>*>*  promise;

/// @brief Field val1, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_val1, put=__cordl_internal_set_val1)) T1  val1;

/// @brief Field val2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_val2, put=__cordl_internal_set_val2)) T2  val2;

static inline ::RSG::PromiseHelpers___c__DisplayClass0_0_2<T1,T2>* New_ctor() ;

/// @brief Method <All>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _All_b__0(T1  val) ;

/// @brief Method <All>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _All_b__1(::System::Exception*  e) ;

/// @brief Method <All>b__2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _All_b__2(T2  val) ;

/// @brief Method <All>b__3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _All_b__3(::System::Exception*  e) ;

constexpr bool const& __cordl_internal_get_alreadyRejected() const;

constexpr bool& __cordl_internal_get_alreadyRejected() ;

constexpr int32_t const& __cordl_internal_get_numUnresolved() const;

constexpr int32_t& __cordl_internal_get_numUnresolved() ;

constexpr ::RSG::Promise_1<::RSG::Tuple_2<T1,T2>*>* const& __cordl_internal_get_promise() const;

constexpr ::RSG::Promise_1<::RSG::Tuple_2<T1,T2>*>*& __cordl_internal_get_promise() ;

constexpr T1 const& __cordl_internal_get_val1() const;

constexpr T1& __cordl_internal_get_val1() ;

constexpr T2 const& __cordl_internal_get_val2() const;

constexpr T2& __cordl_internal_get_val2() ;

constexpr void __cordl_internal_set_alreadyRejected(bool  value) ;

constexpr void __cordl_internal_set_numUnresolved(int32_t  value) ;

constexpr void __cordl_internal_set_promise(::RSG::Promise_1<::RSG::Tuple_2<T1,T2>*>*  value) ;

constexpr void __cordl_internal_set_val1(T1  value) ;

constexpr void __cordl_internal_set_val2(T2  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PromiseHelpers___c__DisplayClass0_0_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PromiseHelpers___c__DisplayClass0_0_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PromiseHelpers___c__DisplayClass0_0_2(PromiseHelpers___c__DisplayClass0_0_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PromiseHelpers___c__DisplayClass0_0_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PromiseHelpers___c__DisplayClass0_0_2(PromiseHelpers___c__DisplayClass0_0_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1686};

/// @brief Field val1, offset: 0x10, size: 0x8, def value: None
 T1  ___val1;

/// @brief Field numUnresolved, offset: 0x18, size: 0x4, def value: None
 int32_t  ___numUnresolved;

/// @brief Field promise, offset: 0x20, size: 0x8, def value: None
 ::RSG::Promise_1<::RSG::Tuple_2<T1,T2>*>*  ___promise;

/// @brief Field val2, offset: 0x28, size: 0x8, def value: None
 T2  ___val2;

/// @brief Field alreadyRejected, offset: 0x30, size: 0x1, def value: None
 bool  ___alreadyRejected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
// Dependencies System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.PromiseHelpers
class CORDL_TYPE PromiseHelpers : public ::System::Object {
public:
// Declarations
template<typename T1,typename T2,typename T3>
using __c__1_3 = ::RSG::PromiseHelpers___c__1_3<T1, T2, T3>;

template<typename T1,typename T2,typename T3,typename T4>
using __c__2_4 = ::RSG::PromiseHelpers___c__2_4<T1, T2, T3, T4>;

template<typename T1,typename T2>
using __c__DisplayClass0_0_2 = ::RSG::PromiseHelpers___c__DisplayClass0_0_2<T1, T2>;

/// @brief Method All, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::RSG::IPromise_1<::RSG::Tuple_2<T1,T2>*>* All(::RSG::IPromise_1<T1>*  p1, ::RSG::IPromise_1<T2>*  p2) ;

/// @brief Method All, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::RSG::IPromise_1<::RSG::Tuple_3<T1,T2,T3>*>* All(::RSG::IPromise_1<T1>*  p1, ::RSG::IPromise_1<T2>*  p2, ::RSG::IPromise_1<T3>*  p3) ;

/// @brief Method All, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4>
static inline ::RSG::IPromise_1<::RSG::Tuple_4<T1,T2,T3,T4>*>* All(::RSG::IPromise_1<T1>*  p1, ::RSG::IPromise_1<T2>*  p2, ::RSG::IPromise_1<T3>*  p3, ::RSG::IPromise_1<T4>*  p4) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PromiseHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PromiseHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PromiseHelpers(PromiseHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PromiseHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PromiseHelpers(PromiseHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1687};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RSG::PromiseHelpers, 0x10>, "Size mismatch!");

} // namespace end def RSG
NEED_NO_BOX(::RSG::PromiseHelpers);
DEFINE_IL2CPP_ARG_TYPE(::RSG::PromiseHelpers*, "RSG", "PromiseHelpers");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::PromiseHelpers___c__1_3, "RSG", "PromiseHelpers/<>c__1`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::PromiseHelpers___c__2_4, "RSG", "PromiseHelpers/<>c__2`4");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::PromiseHelpers___c__DisplayClass0_0_2, "RSG", "PromiseHelpers/<>c__DisplayClass0_0`2");
