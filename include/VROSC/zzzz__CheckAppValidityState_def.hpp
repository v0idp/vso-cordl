#pragma once
// IWYU pragma private; include "VROSC/CheckAppValidityState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
CORDL_MODULE_EXPORT(CheckAppValidityState)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace VROSC {
class CheckAppValidityState___c;
}
namespace VROSC {
struct Error;
}
// Forward declare root types
namespace VROSC {
class CheckAppValidityState;
}
namespace VROSC {
class CheckAppValidityState___c;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::CheckAppValidityState);
MARK_REF_PTR_T(::VROSC::CheckAppValidityState___c);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CheckAppValidityState/<>c
class CORDL_TYPE CheckAppValidityState___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::CheckAppValidityState___c*  __9;

/// @brief Field <>9__1_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__1_0, put=setStaticF___9__1_0)) ::System::Action*  __9__1_0;

/// @brief Field <>9__1_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__1_1, put=setStaticF___9__1_1)) ::System::Action*  __9__1_1;

/// @brief Field <>9__1_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__1_2, put=setStaticF___9__1_2)) ::System::Action_1<::VROSC::Error>*  __9__1_2;

static inline ::VROSC::CheckAppValidityState___c* New_ctor() ;

/// @brief Method <OnEnter>b__1_0, addr 0x16f7e4c, size 0x190, virtual false, abstract: false, final false
inline void _OnEnter_b__1_0() ;

/// @brief Method <OnEnter>b__1_1, addr 0x16f7fdc, size 0x68, virtual false, abstract: false, final false
inline void _OnEnter_b__1_1() ;

/// @brief Method <OnEnter>b__1_2, addr 0x16f8044, size 0xb8, virtual false, abstract: false, final false
inline void _OnEnter_b__1_2(::VROSC::Error  error) ;

/// @brief Method .ctor, addr 0x16f7e44, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::CheckAppValidityState___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__1_0() ;

static inline ::System::Action* getStaticF___9__1_1() ;

static inline ::System::Action_1<::VROSC::Error>* getStaticF___9__1_2() ;

static inline void setStaticF___9(::VROSC::CheckAppValidityState___c*  value) ;

static inline void setStaticF___9__1_0(::System::Action*  value) ;

static inline void setStaticF___9__1_1(::System::Action*  value) ;

static inline void setStaticF___9__1_2(::System::Action_1<::VROSC::Error>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CheckAppValidityState___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CheckAppValidityState___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CheckAppValidityState___c(CheckAppValidityState___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CheckAppValidityState___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CheckAppValidityState___c(CheckAppValidityState___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{797};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::CheckAppValidityState___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CheckAppValidityState
class CORDL_TYPE CheckAppValidityState : public ::System::Object {
public:
// Declarations
using __c = ::VROSC::CheckAppValidityState___c;

/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

static inline ::VROSC::CheckAppValidityState* New_ctor() ;

/// @brief Method OnEnter, addr 0x16f7cd8, size 0x104, virtual true, abstract: false, final true
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x16f7ddc, size 0x4, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x16f7de0, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateData, addr 0x16f7de4, size 0x4, virtual true, abstract: false, final true
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method .ctor, addr 0x16f7cd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CheckAppValidityState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CheckAppValidityState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CheckAppValidityState(CheckAppValidityState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CheckAppValidityState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CheckAppValidityState(CheckAppValidityState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{798};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::CheckAppValidityState, 0x10>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::CheckAppValidityState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CheckAppValidityState*, "VROSC", "CheckAppValidityState");
NEED_NO_BOX(::VROSC::CheckAppValidityState___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CheckAppValidityState___c*, "VROSC", "CheckAppValidityState/<>c");
