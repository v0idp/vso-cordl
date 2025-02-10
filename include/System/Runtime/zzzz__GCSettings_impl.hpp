#pragma once
// IWYU pragma private; include "System/Runtime/GCSettings.hpp"
#include "System/Runtime/zzzz__GCLargeObjectHeapCompactionMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/zzzz__GCSettings_def.hpp"
#include "System/Runtime/zzzz__GCLargeObjectHeapCompactionMode_def.hpp"
//  Writing Method size for method: ::System::Runtime::GCSettings.set_LargeObjectHeapCompactionMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::GCLargeObjectHeapCompactionMode)>(&::System::Runtime::GCSettings::set_LargeObjectHeapCompactionMode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x262ed40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::GCSettings*>::get(),
                        "set_LargeObjectHeapCompactionMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::GCLargeObjectHeapCompactionMode>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::Runtime::GCSettings::setStaticF__LargeObjectHeapCompactionMode_k__BackingField(::System::Runtime::GCLargeObjectHeapCompactionMode  value)  {
::cordl_internals::setStaticField<::System::Runtime::GCLargeObjectHeapCompactionMode, "<LargeObjectHeapCompactionMode>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::GCSettings*>::get>(std::forward<::System::Runtime::GCLargeObjectHeapCompactionMode>(value));
}
inline ::System::Runtime::GCLargeObjectHeapCompactionMode System::Runtime::GCSettings::getStaticF__LargeObjectHeapCompactionMode_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Runtime::GCLargeObjectHeapCompactionMode, "<LargeObjectHeapCompactionMode>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::GCSettings*>::get>();
}
inline void System::Runtime::GCSettings::set_LargeObjectHeapCompactionMode(::System::Runtime::GCLargeObjectHeapCompactionMode  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::GCSettings*>::get(),
                        "set_LargeObjectHeapCompactionMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::GCLargeObjectHeapCompactionMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Runtime::GCSettings::GCSettings()   {
}
