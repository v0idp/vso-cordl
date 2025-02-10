#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ListViewDragger.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DragAndDropPosition_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DragEventsProcessor_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewDragger_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragAndDropArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragVisualMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICollectionDragAndDropController_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewDragger_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollView_def.hpp"
#include "UnityEngine/UIElements/zzzz__StartDragArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger_DragPosition.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::ListViewDragger_DragPosition::*)(::UnityEngine::UIElements::ListViewDragger_DragPosition)>(&::UnityEngine::UIElements::ListViewDragger_DragPosition::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x30de6a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger_DragPosition>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ListViewDragger_DragPosition>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger_DragPosition.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::ListViewDragger_DragPosition::*)(::System::Object*)>(&::UnityEngine::UIElements::ListViewDragger_DragPosition::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x30e0514;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger_DragPosition>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger_DragPosition>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger_DragPosition.GetHashCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::ListViewDragger_DragPosition::*)()>(&::UnityEngine::UIElements::ListViewDragger_DragPosition::GetHashCode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x30e059c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger_DragPosition>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger_DragPosition>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::ListViewDragger_DragPosition::Equals(::UnityEngine::UIElements::ListViewDragger_DragPosition  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger_DragPosition>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ListViewDragger_DragPosition>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::ListViewDragger_DragPosition::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger_DragPosition>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::ListViewDragger_DragPosition::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger_DragPosition>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::ListViewDragger_DragPosition>"
constexpr  UnityEngine::UIElements::ListViewDragger_DragPosition::operator ::System::IEquatable_1<::UnityEngine::UIElements::ListViewDragger_DragPosition>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::ListViewDragger_DragPosition>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::ListViewDragger_DragPosition>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::ListViewDragger_DragPosition>* UnityEngine::UIElements::ListViewDragger_DragPosition::i___System__IEquatable_1___UnityEngine__UIElements__ListViewDragger_DragPosition_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::ListViewDragger_DragPosition>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "insertAtIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "parentId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "childIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "recycledItem", ty: "::UnityEngine::UIElements::ReusableCollectionItem*", modifiers: "", def_value: Some("{}") }, CppParam { name: "dropPosition", ty: "::UnityEngine::UIElements::DragAndDropPosition", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::ListViewDragger_DragPosition::ListViewDragger_DragPosition(int32_t  insertAtIndex, int32_t  parentId, int32_t  childIndex, ::UnityEngine::UIElements::ReusableCollectionItem*  recycledItem, ::UnityEngine::UIElements::DragAndDropPosition  dropPosition) noexcept  {
this->insertAtIndex = insertAtIndex;
this->parentId = parentId;
this->childIndex = childIndex;
this->recycledItem = recycledItem;
this->dropPosition = dropPosition;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ListViewDragger_DragPosition::ListViewDragger_DragPosition()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.get_targetView
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BaseVerticalCollectionView* (::UnityEngine::UIElements::ListViewDragger::*)()>(&::UnityEngine::UIElements::ListViewDragger::get_targetView)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x30dca1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "get_targetView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.get_targetScrollView
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ScrollView* (::UnityEngine::UIElements::ListViewDragger::*)()>(&::UnityEngine::UIElements::ListViewDragger::get_targetScrollView)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x30dca98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "get_targetScrollView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.get_dragAndDropController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ICollectionDragAndDropController* (::UnityEngine::UIElements::ListViewDragger::*)()>(&::UnityEngine::UIElements::ListViewDragger::get_dragAndDropController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30dcab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "get_dragAndDropController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.set_dragAndDropController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::UIElements::ICollectionDragAndDropController*)>(&::UnityEngine::UIElements::ListViewDragger::set_dragAndDropController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30dcabc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "set_dragAndDropController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ICollectionDragAndDropController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::UIElements::BaseVerticalCollectionView*)>(&::UnityEngine::UIElements::ListViewDragger::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x30dcac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.CanStartDrag
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector3)>(&::UnityEngine::UIElements::ListViewDragger::CanStartDrag)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x30dcad0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.StartDrag
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StartDragArgs (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector3)>(&::UnityEngine::UIElements::ListViewDragger::StartDrag)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x30dd138;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.UpdateDrag
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector3)>(&::UnityEngine::UIElements::ListViewDragger::UpdateDrag)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x30dd420;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.GetVisualMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DragVisualMode (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector3, ::ByRef<::UnityEngine::UIElements::ListViewDragger_DragPosition>)>(&::UnityEngine::UIElements::ListViewDragger::GetVisualMode)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x30dd5f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "GetVisualMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::ListViewDragger_DragPosition>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.OnDrop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector3)>(&::UnityEngine::UIElements::ListViewDragger::OnDrop)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x30de320;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.HandleDragAndScroll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::ListViewDragger::HandleDragAndScroll)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x30dd780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "HandleDragAndScroll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.HandleAutoExpansion
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::ListViewDragger::HandleAutoExpansion)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x30dd978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "HandleAutoExpansion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.ApplyDragAndDropUI
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::UIElements::ListViewDragger_DragPosition)>(&::UnityEngine::UIElements::ListViewDragger::ApplyDragAndDropUI)> {
  constexpr static std::size_t size = 0x798;
  constexpr static std::size_t addrs = 0x30dda64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "ApplyDragAndDropUI",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ListViewDragger_DragPosition>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.TryGetDragPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector2, ::ByRef<::UnityEngine::UIElements::ListViewDragger_DragPosition>)>(&::UnityEngine::UIElements::ListViewDragger::TryGetDragPosition)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x30df0d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.HandleTreePosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector2, ::ByRef<::UnityEngine::UIElements::ListViewDragger_DragPosition>)>(&::UnityEngine::UIElements::ListViewDragger::HandleTreePosition)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x30df49c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "HandleTreePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::ListViewDragger_DragPosition>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.HandleSiblingInsertionAtAvailableDepthsAndChangeTargetIfNeeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::ByRef<::UnityEngine::UIElements::ListViewDragger_DragPosition>, ::UnityEngine::Vector2)>(&::UnityEngine::UIElements::ListViewDragger::HandleSiblingInsertionAtAvailableDepthsAndChangeTargetIfNeeded)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x30df5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "HandleSiblingInsertionAtAvailableDepthsAndChangeTargetIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::ListViewDragger_DragPosition>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.GetPreviousAndNextItemsIgnoringDraggedItems
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(int32_t, ::ByRef<int32_t>, ::ByRef<int32_t>)>(&::UnityEngine::UIElements::ListViewDragger::GetPreviousAndNextItemsIgnoringDraggedItems)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x30dfabc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "GetPreviousAndNextItemsIgnoringDraggedItems",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.MakeDragAndDropArgs
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DragAndDropArgs (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::UIElements::ListViewDragger_DragPosition)>(&::UnityEngine::UIElements::ListViewDragger::MakeDragAndDropArgs)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x30de1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "MakeDragAndDropArgs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ListViewDragger_DragPosition>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.GetHoverBarTopPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::UIElements::ReusableCollectionItem*)>(&::UnityEngine::UIElements::ListViewDragger::GetHoverBarTopPosition)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x30dfd34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "GetHoverBarTopPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ReusableCollectionItem*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.PlaceHoverBarAtElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::UIElements::ReusableCollectionItem*)>(&::UnityEngine::UIElements::ListViewDragger::PlaceHoverBarAtElement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x30df0bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "PlaceHoverBarAtElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ReusableCollectionItem*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.PlaceHoverBarAt
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(float_t, float_t, float_t)>(&::UnityEngine::UIElements::ListViewDragger::PlaceHoverBarAt)> {
  constexpr static std::size_t size = 0x660;
  constexpr static std::size_t addrs = 0x30de718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "PlaceHoverBarAt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.ClearDragAndDropUI
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(bool)>(&::UnityEngine::UIElements::ListViewDragger::ClearDragAndDropUI)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x30dfdc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.GetRecycledItem
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ReusableCollectionItem* (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector3)>(&::UnityEngine::UIElements::ListViewDragger::GetRecycledItem)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x30dcdbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "GetRecycledItem",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger._ApplyDragAndDropUI_g__GeometryChangedCallback_27_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(&::UnityEngine::UIElements::ListViewDragger::_ApplyDragAndDropUI_g__GeometryChangedCallback_27_0)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x30e0430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "<ApplyDragAndDropUI>g__GeometryChangedCallback|27_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::ListViewDragger_DragPosition& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_LastDragPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastDragPosition;
}
constexpr ::UnityEngine::UIElements::ListViewDragger_DragPosition const& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_LastDragPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastDragPosition;
}
constexpr void UnityEngine::UIElements::ListViewDragger::__cordl_internal_set_m_LastDragPosition(::UnityEngine::UIElements::ListViewDragger_DragPosition  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastDragPosition = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_DragHoverBar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DragHoverBar;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_DragHoverBar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DragHoverBar;
}
constexpr void UnityEngine::UIElements::ListViewDragger::__cordl_internal_set_m_DragHoverBar(::UnityEngine::UIElements::VisualElement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DragHoverBar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_DragHoverItemMarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DragHoverItemMarker;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_DragHoverItemMarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DragHoverItemMarker;
}
constexpr void UnityEngine::UIElements::ListViewDragger::__cordl_internal_set_m_DragHoverItemMarker(::UnityEngine::UIElements::VisualElement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DragHoverItemMarker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_DragHoverSiblingMarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DragHoverSiblingMarker;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_DragHoverSiblingMarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DragHoverSiblingMarker;
}
constexpr void UnityEngine::UIElements::ListViewDragger::__cordl_internal_set_m_DragHoverSiblingMarker(::UnityEngine::UIElements::VisualElement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DragHoverSiblingMarker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_LeftIndentation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftIndentation;
}
constexpr float_t const& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_LeftIndentation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftIndentation;
}
constexpr void UnityEngine::UIElements::ListViewDragger::__cordl_internal_set_m_LeftIndentation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LeftIndentation = value;
}
constexpr float_t& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_SiblingBottom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SiblingBottom;
}
constexpr float_t const& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_SiblingBottom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SiblingBottom;
}
constexpr void UnityEngine::UIElements::ListViewDragger::__cordl_internal_set_m_SiblingBottom(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SiblingBottom = value;
}
constexpr ::UnityEngine::UIElements::ICollectionDragAndDropController*& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get__dragAndDropController_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dragAndDropController_k__BackingField;
}
constexpr ::UnityEngine::UIElements::ICollectionDragAndDropController* const& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get__dragAndDropController_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dragAndDropController_k__BackingField;
}
constexpr void UnityEngine::UIElements::ListViewDragger::__cordl_internal_set__dragAndDropController_k__BackingField(::UnityEngine::UIElements::ICollectionDragAndDropController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dragAndDropController_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::BaseVerticalCollectionView* UnityEngine::UIElements::ListViewDragger::get_targetView()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "get_targetView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BaseVerticalCollectionView*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ScrollView* UnityEngine::UIElements::ListViewDragger::get_targetScrollView()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "get_targetScrollView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ScrollView*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ICollectionDragAndDropController* UnityEngine::UIElements::ListViewDragger::get_dragAndDropController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "get_dragAndDropController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ICollectionDragAndDropController*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListViewDragger::set_dragAndDropController(::UnityEngine::UIElements::ICollectionDragAndDropController*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "set_dragAndDropController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ICollectionDragAndDropController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ListViewDragger::_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView*  listView)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listView);
}
inline bool UnityEngine::UIElements::ListViewDragger::CanStartDrag(::UnityEngine::Vector3  pointerPosition)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pointerPosition);
}
inline ::UnityEngine::UIElements::StartDragArgs UnityEngine::UIElements::ListViewDragger::StartDrag(::UnityEngine::Vector3  pointerPosition)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StartDragArgs, false>(this, ___internal_method, pointerPosition);
}
inline void UnityEngine::UIElements::ListViewDragger::UpdateDrag(::UnityEngine::Vector3  pointerPosition)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointerPosition);
}
inline ::UnityEngine::UIElements::DragVisualMode UnityEngine::UIElements::ListViewDragger::GetVisualMode(::UnityEngine::Vector3  pointerPosition, ::ByRef<::UnityEngine::UIElements::ListViewDragger_DragPosition>  dragPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "GetVisualMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::ListViewDragger_DragPosition>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragVisualMode, false>(this, ___internal_method, pointerPosition, dragPosition);
}
inline void UnityEngine::UIElements::ListViewDragger::OnDrop(::UnityEngine::Vector3  pointerPosition)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointerPosition);
}
inline void UnityEngine::UIElements::ListViewDragger::HandleDragAndScroll(::UnityEngine::Vector2  pointerPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "HandleDragAndScroll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointerPosition);
}
inline void UnityEngine::UIElements::ListViewDragger::HandleAutoExpansion(::UnityEngine::Vector2  pointerPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "HandleAutoExpansion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointerPosition);
}
inline void UnityEngine::UIElements::ListViewDragger::ApplyDragAndDropUI(::UnityEngine::UIElements::ListViewDragger_DragPosition  dragPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "ApplyDragAndDropUI",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ListViewDragger_DragPosition>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dragPosition);
}
inline bool UnityEngine::UIElements::ListViewDragger::TryGetDragPosition(::UnityEngine::Vector2  pointerPosition, ::ByRef<::UnityEngine::UIElements::ListViewDragger_DragPosition>  dragPosition)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pointerPosition, dragPosition);
}
inline void UnityEngine::UIElements::ListViewDragger::HandleTreePosition(::UnityEngine::Vector2  pointerPosition, ::ByRef<::UnityEngine::UIElements::ListViewDragger_DragPosition>  dragPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "HandleTreePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::ListViewDragger_DragPosition>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointerPosition, dragPosition);
}
inline void UnityEngine::UIElements::ListViewDragger::HandleSiblingInsertionAtAvailableDepthsAndChangeTargetIfNeeded(::ByRef<::UnityEngine::UIElements::ListViewDragger_DragPosition>  dragPosition, ::UnityEngine::Vector2  pointerPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "HandleSiblingInsertionAtAvailableDepthsAndChangeTargetIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::ListViewDragger_DragPosition>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dragPosition, pointerPosition);
}
inline void UnityEngine::UIElements::ListViewDragger::GetPreviousAndNextItemsIgnoringDraggedItems(int32_t  insertAtIndex, ::ByRef<int32_t>  previousItemId, ::ByRef<int32_t>  nextItemId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "GetPreviousAndNextItemsIgnoringDraggedItems",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, insertAtIndex, previousItemId, nextItemId);
}
inline ::UnityEngine::UIElements::DragAndDropArgs UnityEngine::UIElements::ListViewDragger::MakeDragAndDropArgs(::UnityEngine::UIElements::ListViewDragger_DragPosition  dragPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "MakeDragAndDropArgs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ListViewDragger_DragPosition>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragAndDropArgs, false>(this, ___internal_method, dragPosition);
}
inline float_t UnityEngine::UIElements::ListViewDragger::GetHoverBarTopPosition(::UnityEngine::UIElements::ReusableCollectionItem*  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "GetHoverBarTopPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ReusableCollectionItem*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, item);
}
inline void UnityEngine::UIElements::ListViewDragger::PlaceHoverBarAtElement(::UnityEngine::UIElements::ReusableCollectionItem*  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "PlaceHoverBarAtElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ReusableCollectionItem*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline void UnityEngine::UIElements::ListViewDragger::PlaceHoverBarAt(float_t  top, float_t  indentationPadding, float_t  siblingBottom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "PlaceHoverBarAt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, top, indentationPadding, siblingBottom);
}
inline void UnityEngine::UIElements::ListViewDragger::ClearDragAndDropUI(bool  dragCancelled)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dragCancelled);
}
inline ::UnityEngine::UIElements::ReusableCollectionItem* UnityEngine::UIElements::ListViewDragger::GetRecycledItem(::UnityEngine::Vector3  pointerPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "GetRecycledItem",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ReusableCollectionItem*, false>(this, ___internal_method, pointerPosition);
}
inline void UnityEngine::UIElements::ListViewDragger::_ApplyDragAndDropUI_g__GeometryChangedCallback_27_0(::UnityEngine::UIElements::GeometryChangedEvent*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                        "<ApplyDragAndDropUI>g__GeometryChangedCallback|27_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline ::UnityEngine::UIElements::ListViewDragger* UnityEngine::UIElements::ListViewDragger::New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView*  listView)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::ListViewDragger*>(listView));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ListViewDragger::ListViewDragger()   {
}
