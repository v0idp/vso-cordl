#pragma once
// IWYU pragma private; include "Proyecto26/StaticCoroutine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StaticCoroutine)
namespace Proyecto26 {
class StaticCoroutine_CoroutineHolder;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace Proyecto26 {
class StaticCoroutine;
}
namespace Proyecto26 {
class StaticCoroutine_CoroutineHolder;
}
// Write type traits
MARK_REF_PTR_T(::Proyecto26::StaticCoroutine);
MARK_REF_PTR_T(::Proyecto26::StaticCoroutine_CoroutineHolder);
// Dependencies UnityEngine.MonoBehaviour
namespace Proyecto26 {
// Is value type: false
// CS Name: Proyecto26.StaticCoroutine/CoroutineHolder
class CORDL_TYPE StaticCoroutine_CoroutineHolder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Proyecto26::StaticCoroutine_CoroutineHolder* New_ctor() ;

/// @brief Method .ctor, addr 0x17f8c74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StaticCoroutine_CoroutineHolder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StaticCoroutine_CoroutineHolder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticCoroutine_CoroutineHolder(StaticCoroutine_CoroutineHolder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticCoroutine_CoroutineHolder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticCoroutine_CoroutineHolder(StaticCoroutine_CoroutineHolder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1740};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Proyecto26::StaticCoroutine_CoroutineHolder, 0x20>, "Size mismatch!");

} // namespace end def Proyecto26
// Dependencies System.Object
namespace Proyecto26 {
// Is value type: false
// CS Name: Proyecto26.StaticCoroutine
class CORDL_TYPE StaticCoroutine : public ::System::Object {
public:
// Declarations
using CoroutineHolder = ::Proyecto26::StaticCoroutine_CoroutineHolder;

/// @brief Field _runner, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__runner, put=setStaticF__runner)) ::UnityW<::Proyecto26::StaticCoroutine_CoroutineHolder>  _runner;

/// @brief Method StartCoroutine, addr 0x17f8c50, size 0x24, virtual false, abstract: false, final false
static inline ::UnityEngine::Coroutine* StartCoroutine(::System::Collections::IEnumerator*  coroutine) ;

static inline ::UnityW<::Proyecto26::StaticCoroutine_CoroutineHolder> getStaticF__runner() ;

/// @brief Method get_Runner, addr 0x17f8b28, size 0x128, virtual false, abstract: false, final false
static inline ::UnityW<::Proyecto26::StaticCoroutine_CoroutineHolder> get_Runner() ;

static inline void setStaticF__runner(::UnityW<::Proyecto26::StaticCoroutine_CoroutineHolder>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StaticCoroutine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StaticCoroutine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticCoroutine(StaticCoroutine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticCoroutine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticCoroutine(StaticCoroutine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1741};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Proyecto26::StaticCoroutine, 0x10>, "Size mismatch!");

} // namespace end def Proyecto26
NEED_NO_BOX(::Proyecto26::StaticCoroutine);
DEFINE_IL2CPP_ARG_TYPE(::Proyecto26::StaticCoroutine*, "Proyecto26", "StaticCoroutine");
NEED_NO_BOX(::Proyecto26::StaticCoroutine_CoroutineHolder);
DEFINE_IL2CPP_ARG_TYPE(::Proyecto26::StaticCoroutine_CoroutineHolder*, "Proyecto26", "StaticCoroutine/CoroutineHolder");
