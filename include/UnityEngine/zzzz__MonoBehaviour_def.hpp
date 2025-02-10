#pragma once
// IWYU pragma private; include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MonoBehaviour)
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class MonoBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::MonoBehaviour);
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.MonoBehaviour
class CORDL_TYPE MonoBehaviour : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_destroyCancellationToken)) ::System::Threading::CancellationToken  destroyCancellationToken;

/// @brief Field m_CancellationTokenSource, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CancellationTokenSource, put=__cordl_internal_set_m_CancellationTokenSource)) ::System::Threading::CancellationTokenSource*  m_CancellationTokenSource;

 __declspec(property(get=get_useGUILayout, put=set_useGUILayout)) bool  useGUILayout;

/// @brief Method CancelInvoke, addr 0x2f8c23c, size 0x3c, virtual false, abstract: false, final false
inline void CancelInvoke() ;

/// @brief Method CancelInvoke, addr 0x2f8c498, size 0x44, virtual false, abstract: false, final false
inline void CancelInvoke(::StringW  methodName) ;

/// @brief Method CancelInvoke, addr 0x2f8c4dc, size 0x44, virtual false, abstract: false, final false
static inline void CancelInvoke(::UnityEngine::MonoBehaviour*  self, ::StringW  methodName) ;

/// @brief Method GetScriptClassName, addr 0x2f8cc44, size 0x3c, virtual false, abstract: false, final false
inline ::StringW GetScriptClassName() ;

/// @brief Method Internal_CancelInvokeAll, addr 0x2f8c278, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_CancelInvokeAll(::UnityEngine::MonoBehaviour*  self) ;

/// @brief Method Internal_IsInvokingAll, addr 0x2f8c200, size 0x3c, virtual false, abstract: false, final false
static inline bool Internal_IsInvokingAll(::UnityEngine::MonoBehaviour*  self) ;

/// @brief Method Invoke, addr 0x2f8c2b4, size 0x58, virtual false, abstract: false, final false
inline void Invoke(::StringW  methodName, float_t  time) ;

/// @brief Method InvokeDelayed, addr 0x2f8c30c, size 0x5c, virtual false, abstract: false, final false
static inline void InvokeDelayed(::UnityEngine::MonoBehaviour*  self, ::StringW  methodName, float_t  time, float_t  repeatRate) ;

/// @brief Method InvokeRepeating, addr 0x2f8c368, size 0xb8, virtual false, abstract: false, final false
inline void InvokeRepeating(::StringW  methodName, float_t  time, float_t  repeatRate) ;

/// @brief Method IsInvoking, addr 0x2f8c1c4, size 0x3c, virtual false, abstract: false, final false
inline bool IsInvoking() ;

/// @brief Method IsInvoking, addr 0x2f8c520, size 0x44, virtual false, abstract: false, final false
inline bool IsInvoking(::StringW  methodName) ;

/// @brief Method IsInvoking, addr 0x2f8c564, size 0x44, virtual false, abstract: false, final false
static inline bool IsInvoking(::UnityEngine::MonoBehaviour*  self, ::StringW  methodName) ;

/// @brief Method IsObjectMonoBehaviour, addr 0x2f8c6bc, size 0x3c, virtual false, abstract: false, final false
static inline bool IsObjectMonoBehaviour(::UnityEngine::Object*  obj) ;

static inline ::UnityEngine::MonoBehaviour* New_ctor() ;

/// @brief Method OnCancellationTokenCreated, addr 0x2f8c174, size 0x3c, virtual false, abstract: false, final false
inline void OnCancellationTokenCreated() ;

/// @brief Method RaiseCancellation, addr 0x2f8c1b0, size 0x14, virtual false, abstract: false, final false
inline void RaiseCancellation() ;

/// @brief Method StartCoroutine, addr 0x2f8c5a8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Coroutine* StartCoroutine(::StringW  methodName) ;

/// @brief Method StartCoroutine, addr 0x2f8c5b0, size 0x10c, virtual false, abstract: false, final false
inline ::UnityEngine::Coroutine* StartCoroutine(::StringW  methodName, ::System::Object*  value) ;

/// @brief Method StartCoroutine, addr 0x2f8c74c, size 0xf0, virtual false, abstract: false, final false
inline ::UnityEngine::Coroutine* StartCoroutine(::System::Collections::IEnumerator*  routine) ;

/// @brief Method StartCoroutineManaged, addr 0x2f8c6f8, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Coroutine* StartCoroutineManaged(::StringW  methodName, ::System::Object*  value) ;

/// @brief Method StartCoroutineManaged2, addr 0x2f8c83c, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::Coroutine* StartCoroutineManaged2(::System::Collections::IEnumerator*  enumerator) ;

/// @brief Method StartCoroutine_Auto, addr 0x2f8c880, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Coroutine* StartCoroutine_Auto(::System::Collections::IEnumerator*  routine) ;

/// @brief Method StopAllCoroutines, addr 0x2f8cb30, size 0x3c, virtual false, abstract: false, final false
inline void StopAllCoroutines() ;

/// @brief Method StopCoroutine, addr 0x2f8caec, size 0x44, virtual false, abstract: false, final false
inline void StopCoroutine(::StringW  methodName) ;

/// @brief Method StopCoroutine, addr 0x2f8c884, size 0xf0, virtual false, abstract: false, final false
inline void StopCoroutine(::System::Collections::IEnumerator*  routine) ;

/// @brief Method StopCoroutine, addr 0x2f8c9b8, size 0xf0, virtual false, abstract: false, final false
inline void StopCoroutine(::UnityEngine::Coroutine*  routine) ;

/// @brief Method StopCoroutineFromEnumeratorManaged, addr 0x2f8c974, size 0x44, virtual false, abstract: false, final false
inline void StopCoroutineFromEnumeratorManaged(::System::Collections::IEnumerator*  routine) ;

/// @brief Method StopCoroutineManaged, addr 0x2f8caa8, size 0x44, virtual false, abstract: false, final false
inline void StopCoroutineManaged(::UnityEngine::Coroutine*  routine) ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_m_CancellationTokenSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_m_CancellationTokenSource() ;

constexpr void __cordl_internal_set_m_CancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

/// @brief Method .ctor, addr 0x2f8cc80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_destroyCancellationToken, addr 0x2f8bf88, size 0x110, virtual false, abstract: false, final false
inline ::System::Threading::CancellationToken get_destroyCancellationToken() ;

/// @brief Method get_useGUILayout, addr 0x2f8cb6c, size 0x3c, virtual false, abstract: false, final false
inline bool get_useGUILayout() ;

/// @brief Method print, addr 0x2f8cbec, size 0x58, virtual false, abstract: false, final false
static inline void print(::System::Object*  message) ;

/// @brief Method set_useGUILayout, addr 0x2f8cba8, size 0x44, virtual false, abstract: false, final false
inline void set_useGUILayout(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBehaviour(MonoBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBehaviour(MonoBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8597};

/// @brief Field m_CancellationTokenSource, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ___m_CancellationTokenSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::MonoBehaviour, ___m_CancellationTokenSource) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::MonoBehaviour, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::MonoBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MonoBehaviour*, "UnityEngine", "MonoBehaviour");
