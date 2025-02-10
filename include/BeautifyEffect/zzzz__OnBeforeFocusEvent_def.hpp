#pragma once
// IWYU pragma private; include "BeautifyEffect/OnBeforeFocusEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OnBeforeFocusEvent)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace BeautifyEffect {
class OnBeforeFocusEvent;
}
// Write type traits
MARK_REF_PTR_T(::BeautifyEffect::OnBeforeFocusEvent);
// Dependencies System.MulticastDelegate
namespace BeautifyEffect {
// Is value type: false
// CS Name: BeautifyEffect.OnBeforeFocusEvent
class CORDL_TYPE OnBeforeFocusEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180fa98, size 0x84, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(float_t  currentFocusDistance, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x180fb1c, size 0x28, virtual true, abstract: false, final false
inline float_t EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x180fa84, size 0x14, virtual true, abstract: false, final false
inline float_t Invoke(float_t  currentFocusDistance) ;

static inline ::BeautifyEffect::OnBeforeFocusEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180f9f8, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnBeforeFocusEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnBeforeFocusEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnBeforeFocusEvent(OnBeforeFocusEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnBeforeFocusEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnBeforeFocusEvent(OnBeforeFocusEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1838};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeautifyEffect::OnBeforeFocusEvent, 0x80>, "Size mismatch!");

} // namespace end def BeautifyEffect
NEED_NO_BOX(::BeautifyEffect::OnBeforeFocusEvent);
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::OnBeforeFocusEvent*, "BeautifyEffect", "OnBeforeFocusEvent");
